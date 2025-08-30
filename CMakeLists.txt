cmake_minimum_required(VERSION 3.10)
project(3D-RENDERER)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find required packages
find_package(SDL2 REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(assimp REQUIRED)

# Always use the Windows subsystem and force the entry point to mainCRTStartup
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--subsystem,windows -Wl,--entry,mainCRTStartup")

# Include directories
include_directories(${SDL2_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIRS})

# Source files course
if(1)  # ← set to 1 to enable, 0 to disable
add_executable(opengl-course 
    opengl-course/main.cpp
    opengl-course/Mesh.cpp
    opengl-course/shaders/Shader.cpp
    opengl-course/Window.cpp
    opengl-course/Camera.cpp
    opengl-course/Texture.cpp
    opengl-course/Light.cpp
    opengl-course/Material.cpp
    opengl-course/DirectionalLight.cpp
    opengl-course/PointLight.cpp
    opengl-course/SpotLight.cpp
    opengl-course/Model.cpp
)

# Link libraries
target_link_libraries(opengl-course 
    mingw32
    SDL2::SDL2 
    GLEW::GLEW 
    OpenGL::GL
    glfw
    assimp::assimp
    -static-libgcc
    -static-libstdc++
)

endif()


# Source files project
if(0)  # ← set to 1 to enable, 0 to disable
add_executable(renderer 
    renderer/main.cpp
)

# Link libraries
target_link_libraries(renderer 
    mingw32
)

endif()