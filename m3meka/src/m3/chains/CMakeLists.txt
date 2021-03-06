cmake_minimum_required(VERSION 2.8)
project(chains)
set(LIBNAME "m3chains")

m3generate_proto(ProtoSources ProtoHeaders PySources)

set(LIBS ${LIBS} pthread ${Boost_LIBRARIES}  ${PROTOBUF_LIBRARIES} m3hardware m3toolbox m3base ${orocos_kdl_LIBRARIES})


set( ALL_SRCS
arm.cpp
dynamatics.cpp
factory_proxy.cpp
gripper.cpp
hand.cpp
hand_ua.cpp
head.cpp
joint_array.cpp
joint_chain.cpp
torso.cpp
)
set( ALL_HDRS
arm.h
dynamatics.h
gripper.h
hand.h
hand_ua.h
head.h
joint_array.h
joint_chain.h
torso.h
)

list(APPEND ALL_SRCS ${ProtoSources})

list(APPEND ALL_HDRS
${ProtoHeaders}
${ProtoFiles}
)



## Building
add_library(${LIBNAME} SHARED ${ALL_SRCS})
target_link_libraries(${LIBNAME} ${LIBS})
set_target_properties(${LIBNAME} PROPERTIES COMPILE_FLAGS "-I${CMAKE_BINARY_DIR}/src")

## Installing
install(TARGETS ${LIBNAME} DESTINATION lib)
install(FILES ${ALL_HDRS} DESTINATION include/m3/${PROJECT_NAME})

execute_process (
   COMMAND ${PYTHON_EXECUTABLE} -c
   	"import site, sys; sys.stdout.write(site.PREFIXES[-1])"
   OUTPUT_VARIABLE PYTHON_PREFIX
)
file ( TO_CMAKE_PATH "${PYTHON_PREFIX}" PYTHON_PREFIX )
execute_process (
   COMMAND ${PYTHON_EXECUTABLE} -c
   	"import site, sys; sys.stdout.write(site.getsitepackages()[-1])"
   OUTPUT_VARIABLE PYTHON_SITE_DIR
)
file ( TO_CMAKE_PATH "${PYTHON_SITE_DIR}" PYTHON_SITE_DIR )
string ( REGEX REPLACE "^${PYTHON_PREFIX}/" ""
   PYTHON_SITE_DIR "${PYTHON_SITE_DIR}"
)


install ( FILES ${PySources}
   DESTINATION ${PYTHON_SITE_DIR}/m3
   COMPONENT library
)
