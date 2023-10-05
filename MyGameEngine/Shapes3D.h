#pragma once
#include "types.h"
#include <GL\glew.h>

void DrawPrism(vec3 position, vec3 rotation, vec3 scale, vec4 color) {
    glRotated(1, rotation.x, rotation.y, rotation.z);

    glBegin(GL_TRIANGLES);

    glColor4ub(color.r, color.g, color.b, color.a);

    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);

    glVertex3d(position.x + scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y + scale.y * 0.5, position.z + scale.z * 0.5);


    glVertex3d(position.x - scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y - scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);

    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z + scale.z * 0.5);


    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);

    glVertex3d(position.x + scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y + scale.y * 0.5, position.z + scale.z * 0.5);


    glVertex3d(position.x - scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y - scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z - scale.z * 0.5);
                                           
    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);


    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z + scale.z * 0.5);

    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z + scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y + scale.y * 0.5, position.z + scale.z * 0.5);


    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y - scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);

    glVertex3d(position.x - scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y - scale.y * 0.5, position.z - scale.z * 0.5);
    glVertex3d(position.x + scale.x * 0.5, position.y + scale.y * 0.5, position.z - scale.z * 0.5);

    glEnd();
}