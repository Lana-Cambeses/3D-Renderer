#pragma once

#include <GL\glew.h>


class Mesh {

public:
    Mesh();
    ~Mesh();

    void CreateMesh(GLfloat *vertices, unsigned int *indices, unsigned int nuOfVertices, unsigned int numOfIndices);
    void RenderMesh();
    void ClearMesh();

private:
    GLuint VAO, VBO, IBO;
    GLsizei indexCount;

};