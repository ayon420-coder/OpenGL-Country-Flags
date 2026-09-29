/*
#include <GL/glut.h>

void init(){
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    gluOrtho2D(-1, 1, -1, 1);
}

void south_africa(){
    glClear(GL_COLOR_BUFFER_BIT);

    //Background Green
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.45f, 0.2f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-0.75f, 1.0f);
    glVertex2f(0.0f, 0.25f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(-0.75f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glEnd();
    glFlush();

    glBegin(GL_QUADS);

    glColor3f(0.0f, 0.45f, 0.2f);
    glVertex2f(0.0f, 0.25f);
    glVertex2f(1.0f, 0.25f);
    glVertex2f(1.0f, -0.25f);
    glVertex2f(0.0f, -0.25f);

    glEnd();
    glFlush();


    //Left-Triangle (Gold)
    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.72f, 0.0f);
    glVertex2f(-1.0f, 0.75f);
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(-1.f, -0.75f);

    glEnd();
    glFlush();

    //Left-Triangle (Black)
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-1.f, -0.6f);

    glEnd();
    glFlush();

    //Bottom-Quad (Blue)
    glBegin(GL_QUADS);

    glColor3f(0.0f, 0.1f, 0.55f);
    glVertex2f(-0.625f, -1.0f);
    glVertex2f(0.02f, -0.35f);
    glVertex2f(1.0f, -0.35f);
    glVertex2f(1.0f, -1.0f);

    glEnd();
    glFlush();

    //Top-Quad (Red)
    glBegin(GL_QUADS);

    glColor3f(0.88f, 0.0f, 0.15f);
    glVertex2f(-0.625f, 1.0f);
    glVertex2f(0.02f, 0.35f);
    glVertex2f(1.0f, 0.35f);
    glVertex2f(1.0f, 1.0f);

    glEnd();
    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(640, 480);
    glutInitWindowPosition(150, 50);
    glutCreateWindow("South Africa");

    init();
    glutDisplayFunc(south_africa);
    glutMainLoop();
    return 0;
}
*/
