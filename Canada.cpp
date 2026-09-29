/*
#include <GL/glut.h>

void init(){
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    gluOrtho2D(-1, 1, -1, 1);
}

void canada(){
    glClear(GL_COLOR_BUFFER_BIT);

    // Right Quad (Red)
    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-0.5f, 1.0f);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glEnd();
    glFlush();

    //Left Quad (Red)
    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.5f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(0.5f, -1.0f);

    glEnd();
    glFlush();

    //Maple Leaf (Red)
    //Top-Center
    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.6f);
    //glVertex2f(0.1f, 0.4f);
    //glVertex2f(0.2f, 0.5f);
    glVertex2f(0.2f, -0.25f);
    glVertex2f(-0.2f, -0.25f);
    //glVertex2f(-0.2f, 0.5f);
    //glVertex2f(-0.1f, 0.4f);

    glEnd();
    glFlush();

    //Top-Right
    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.05f, 0.4f);
    glVertex2f(0.15f, 0.5f);
    glVertex2f(0.1f, 0.1f);

    glEnd();
    glFlush();

    //Top-Left
    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.05f, 0.4f);
    glVertex2f(-0.15f, 0.5f);
    glVertex2f(-0.1f, 0.1f);

    glEnd();
    glFlush();

    //Left-Bottom
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.275f, 0.225f);
    glVertex2f(0.325f, 0.085f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.175f, -0.2f);

    glEnd();
    glFlush();

    //Left-Top
    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.285f, 0.15f);
    glVertex2f(0.4f, 0.175f);
    glVertex2f(0.35f, 0.0125f);
    glVertex2f(0.325f, 0.085f);

    glEnd();
    glFlush();

    //Right-Bottom
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.1f);
    glVertex2f(-0.275f, 0.225f);
    glVertex2f(-0.325f, 0.085f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.175f, -0.2f);

    glEnd();
    glFlush();

    //Left-Top
    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.285f, 0.15f);
    glVertex2f(-0.4f, 0.175f);
    glVertex2f(-0.35f, 0.0125f);
    glVertex2f(-0.325f, 0.085f);

    glEnd();
    glFlush();

    //Bottom-Center
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.225f, -0.35f);
    glVertex2f(0.2f, -0.25f);
    glVertex2f(-0.2f, -0.25f);
    glVertex2f(-0.225f, -0.35f);

    glEnd();
    glFlush();

    //Petiole
    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.015f, -0.25f);
    glVertex2f(-0.04f, -0.5f);
    glVertex2f(0.04f, -0.5f);
    glVertex2f(0.015f, -0.25f);

    glEnd();
    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(720, 480);
    glutInitWindowPosition(150, 50);
    glutCreateWindow("Canada");

    init();
    glutDisplayFunc(canada);
    glutMainLoop();
    return 0;
}
*/
