cmake_minimum_required(VERSION 3.10)
project(3D-RENDERER)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find required packages
find_package(SDL2 REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenGL REQUIRED)

# Include directories
include_directories(${SDL2_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIRS})

# Source files
add_executable(3D-RENDERER main.cpp)

# Link libraries
target_link_libraries(3D-RENDERER 
    SDL2::SDL2 
    GLEW::GLEW 
    OpenGL::GL
)