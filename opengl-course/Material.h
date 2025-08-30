#pragma once

#include <GL\glew.h>

class Material {

public:
    Material();
    Material(GLfloat sIntensity, GLfloat shine);

    void UseMaterial(GLuint specularIntensityLocation, GLuint shininessLocation);

    ~Material();

private:
    GLfloat specularIntensity; //How much of the lightsource the object will absorb (reflectiveness); how bright
    GLfloat shininess; //specular power; How smooth the surface will be

};