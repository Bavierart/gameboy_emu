cmake_minimum_required(VERSION 3.16)
project(gameboy_emu)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/*.cpp")
add_executable(gameboy_emu ${SOURCES})
target_link_libraries(gameboy_emu PRIVATE SDL2::SDL2)

