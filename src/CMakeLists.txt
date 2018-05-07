cmake_minimum_required (VERSION 3.10)
project (hello)

SET(CMAKE_SYSROOT /)
SET(CMAKE_C_COMPILER gcc)
SET(CMAKE_CXX_COMPILER g++)

include_directories ("/usr/local/include")

add_executable(hello main.cc hello.cc voice.cc hello.hpp voice.hpp)

link_directories("/usr/local/opt/sdl2/lib" "/usr/lib")

set (EXTRA_LIBS ${EXTRA_LIBS} SDL2 intl)

target_link_libraries (hello  ${EXTRA_LIBS})
