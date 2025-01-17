#include "MyGameEngine.h"
#include <GL\glew.h>
#include <glm/ext/matrix_transform.hpp>

#include "Shapes3D.h"

static double angle = 0.0;

void MyGameEngine::step(std::chrono::duration<double> dt) {
    const double angle_vel = 360.0; // 360 degrees per second
	angle += angle_vel * dt.count();
}

static void drawAxis() {
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex3d(0, 0, 0);
    glVertex3d(0.8, 0, 0);
    glColor3ub(0, 255, 0);
    glVertex3d(0, 0, 0);
    glVertex3d(0, 0.8, 0);
    glColor3ub(0, 0, 1);
    glVertex3d(0, 0, 0);
    glVertex3d(0, 0, 0.8);
    glEnd();
}

static void drawGrid(int grid_size, int grid_step) {
    glLineWidth(1.0);
    glColor3ub(128, 128, 128);

    glBegin(GL_LINES);
    for (int i = -grid_size; i <= grid_size; i += grid_step) {
        //XY plane
        glVertex2i(i, -grid_size);
        glVertex2i(i,  grid_size);
        glVertex2i(-grid_size, i);
        glVertex2i( grid_size, i);

        //XZ plane
        glVertex3i(i, 0, -grid_size);
        glVertex3i(i, 0, grid_size);
        glVertex3i(-grid_size, 0, i);
        glVertex3i( grid_size, 0, i);
    }
    glEnd();
}

void MyGameEngine::render(RenderModes renderMode) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(camera.fov, camera.aspect, camera.zNear, camera.zFar);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt( camera.eye.x, camera.eye.y, camera.eye.z,
        camera.center.x, camera.center.y, camera.center.z,
        camera.up.x, camera.up.y, camera.up.z);

    if (renderMode == RenderModes::DEBUG) {
        drawGrid(100, 1);
        drawAxis();
    }
    


    DrawPrism(positionCube, rotationCube, scaleCube, { 255, 0, 0, 255 });

#pragma region draw square
    /*
    glRotated(angle, 0, 0, 1);

    glBegin(GL_LINE_STRIP);

    glColor4ub(255, 0, 0, 255);
    glVertex3d(1, -1, 1);
    glVertex3d(1, -1, -1);
    glVertex3d(1, 1, -1);
    glColor4ub(255, 0, 0, 255);

    glVertex3d(1, 1, -1);
    glVertex3d(1, -1, 1);
    glVertex3d(1, 1, 1);
    
    glColor4ub(0, 255, 0, 255);
    glVertex3d(-1, -1, 1);
    glVertex3d(-1, -1, -1);
    glVertex3d(-1, 1, -1);
    glColor4ub(0, 255, 0, 255);
    glVertex3d(-1, 1, -1);
    glVertex3d(-1, -1, 1);
    glVertex3d(-1, 1, 1);


    glColor4ub(0, 0, 255, 255);
    glVertex3d(-1, 1, 1);
    glVertex3d(-1, 1, -1);
    glVertex3d(1, 1, -1);
    glColor4ub(0, 0, 255, 255);
    glVertex3d(1, 1, -1);
    glVertex3d(-1, 1, 1);
    glVertex3d(1, 1, 1);

    glColor4ub(255, 255, 0, 255);
    glVertex3d(-1, -1, 1);
    glVertex3d(-1, -1, -1);
    glVertex3d(1, -1, -1);
    glColor4ub(255, 255, 0, 255);
    glVertex3d(1, -1, -1);
    glVertex3d(-1, -1, 1);
    glVertex3d(1, -1, 1);


    glColor4ub(255, 0, 255, 255);
    glVertex3d(1, -1, 1);
    glVertex3d(-1, -1, 1);
    glVertex3d(-1, 1, 1);
    glColor4ub(255, 0, 255, 255);
    glVertex3d(-1, 1, 1);
    glVertex3d(1, -1, 1);
    glVertex3d(1, 1, 1);

    glColor4ub(0, 255, 255, 255);
    glVertex3d(1, -1, -1);
    glVertex3d(-1, -1, -1);
    glVertex3d(-1, 1, -1);
    glColor4ub(0, 255, 255, 255);
    glVertex3d(-1, 1, -1);
    glVertex3d(1, -1, -1);
    glVertex3d(1, 1, -1);

    glEnd();

    */
#pragma endregion

#pragma region direct draw test
    /*glRotated(angle, 0, 0, 1);

    glColor4ub(255, 0, 0, 255);
    glBegin(GL_TRIANGLES);
    glVertex3d(-0.25, -0.25, 0);
    glVertex3d(0.25, -0.25, 0);
    glVertex3d(0, 0.25, 0);

    glVertex3d(0.25, 0.25, 0);
    glVertex3d(-0.25, 0.25, 0);
    glVertex3d(0, -0.25, 0);

    glEnd();*/
#pragma endregion

}
