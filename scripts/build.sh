rm -rf build/
mkdir build
cd build
cmake .. -G "MinGW Makefiles"
mingw32-make -j$(nproc)
cd ..
