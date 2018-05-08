cmake_minimum_required (VERSION 3.5)
project (hello)

SET(CMAKE_SYSROOT /)
SET(CMAKE_C_COMPILER gcc)
SET(CMAKE_CXX_COMPILER g++)

find_package(Intl)

include_directories("${Intl_INCLUDE_DIRS}")
link_directories()

add_executable(hello main.cc hello.cc voice.cc hello.hpp voice.hpp)

set (EXTRA_LIBS ${EXTRA_LIBS} SDL2 "${Intl_LIBRARIES}")

target_link_libraries (hello  ${EXTRA_LIBS})
