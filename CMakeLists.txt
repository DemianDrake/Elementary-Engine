cmake_minimum_required(VERSION 3.20)
project(Game_Engine VERSION 1.0)

add_executable(Game_Engine "public/main.cpp")

configure_file("private/config.h.in" config.h)
target_include_directories(Game_Engine PUBLIC "${PROJECT_BINARY_DIR}")

## GLFW/OpenGL Settings

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})

set(GLFW_BUILD_DOCS OFF CACHE BOOL "GLFW lib only" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "GLFW lib only" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "GLFW lib only" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL  "GLFW lib only" FORCE)

add_subdirectory(glfw)

target_link_libraries(Game_Engine ${OPENGL_LIBRARIES} glfw)
target_link_libraries(Game_Engine OpenGL::GL)
