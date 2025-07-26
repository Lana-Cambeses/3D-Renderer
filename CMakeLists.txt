cmake_minimum_required(VERSION 3.10)
project(3D-RENDERER)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find required packages
find_package(SDL2 REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# Always use the Windows subsystem and force the entry point to mainCRTStartup
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--subsystem,windows -Wl,--entry,mainCRTStartup")

# Include directories
include_directories(${SDL2_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIRS})

# Source files
add_executable(3D-RENDERER 
    renderer/main.cpp 
    renderer/Mesh.cpp
    renderer/shaders/Shader.cpp
)

# Link libraries
target_link_libraries(3D-RENDERER 
    mingw32
    SDL2::SDL2 
    GLEW::GLEW 
    OpenGL::GL
    glfw
    -static-libgcc
    -static-libstdc++
)
