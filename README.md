Interactive 3D Scene Renderer

🚀 A custom-built 3D rendering engine in C++ and OpenGL for real-time interactive 3D scenes.

🌟 Features

✅ Load and render .obj 3D models
✅ Camera controls (Orbit, Zoom, FPS-style movement)
✅ Real-time lighting (Phong Shading, Ambient Light, etc.)
✅ User interaction (Click and manipulate objects)
✅ Basic physics (Collisions, Gravity, etc.)
✅ Custom shaders (Vertex & Fragment Shaders for effects)

🛠️ Technologies & Libraries

C++ – Core programming language
OpenGL – Rendering API
SDL2 – Window creation & input handling
GLM – 3D math library (vectors, matrices, transformations)
Assimp – Model loading library (.obj files)
GLEW/GLAD – OpenGL extension loading
ImGui – GUI for debugging & scene controls

📦 Installation

Prerequisites

Make sure you have the following installed:

GCC 14.2.0 (via MSYS2)
SDL2 (mingw-w64-ucrt-x86_64-SDL2)
CMake (mingw-w64-ucrt-x86_64-cmake)
GLEW/GLAD, GLM, Assimp, and ImGui (Install via CMake or package manager)

Cloning the Repository:

git clone https://github.com/Lana-Cambeses/3D-Renderer.git
cd Interactive3DRenderer

Building the Project:

mkdir build && cd build
cmake ..
make -j$(nproc)

🚀 Running the Application

After building, run:

./Interactive3DRenderer

🛠️ Next Steps

1️⃣ Test SDL2 & OpenGL setup (Render a simple triangle)2️⃣ Create a window & basic rendering pipeline3️⃣ Load a simple .obj model using Assimp4️⃣ Implement camera controls5️⃣ Add lighting & shadows for realism

📜 License

MIT License

🤝 Contributions

Feel free to fork this project, submit pull requests, or report issues!

🎨 Developed by Lana T. C. Garcia