#pragma once

#include <GL\glew.h>
#include "assets/stb_image.h"

class Texture {

public:
    Texture();
    Texture(char* fileLoc);

    bool LoadTexture();
    bool LoadTextureA();

    void UseTexture();
    void ClearTexture();

    ~Texture();

private:
    GLuint textureID;
    int width, height, bitDepth;

    char* fileLocation;

};