/*
#include <GL/glut.h>

void init(){
    glClearColor(0.0f, 0.1f, 0.45f, 0.0f);
    gluOrtho2D(-1, 1, -1, 1);
}

void white_star(float cpx, float cpy){
    float p1x = cpx;
    float p1y = cpy+0.075f;
    float p2x = cpx+0.055f;
    float p2y = cpy+0.015f;
    float p3x = cpx+0.035f;
    float p3y = cpy-0.075f;
    float px = cpx;
    float py = cpy-0.035f;
    float p4x = cpx-0.035f;
    float p4y = cpy-0.075f;
    float p5x = cpx-0.055f;
    float p5y = cpy+0.015f;

    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(p1x, p1y);
    glVertex2f(p3x, p3y);
    glVertex2f(px, py);
    glVertex2f(p4x, p4y);

    glEnd();
    glFlush();

    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(p5x, p5y);
    glVertex2f(p2x,p2y);
    glVertex2f(px, py);

    glEnd();
    glFlush();
}

void red_star(float cpx, float cpy){
    float p1x = cpx;
    float p1y = cpy+0.065f;
    float p2x = cpx+0.045f;
    float p2y = cpy+0.01f;
    float p3x = cpx+0.03f;
    float p3y = cpy-0.065f;
    float px = cpx;
    float py = cpy-0.03f;
    float p4x = cpx-0.03f;
    float p4y = cpy-0.065f;
    float p5x = cpx-0.045f;
    float p5y = cpy+0.01f;

    glBegin(GL_POLYGON);

    glColor3f(0.77f, 0.05f, 0.15f);
    glVertex2f(p1x, p1y);
    glVertex2f(p3x, p3y);
    glVertex2f(px, py);
    glVertex2f(p4x, p4y);

    glEnd();
    glFlush();

    glBegin(GL_TRIANGLES);

    glColor3f(0.77f, 0.05f, 0.15f);
    glVertex2f(p5x, p5y);
    glVertex2f(p2x,p2y);
    glVertex2f(px, py);

    glEnd();
    glFlush();
}

void new_zealand(){
    glClear(GL_COLOR_BUFFER_BIT);

    //White-Diagonals
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-0.1f, 1.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(0.0f, 0.9f);
    glVertex2f(-0.9f, 0.0f);
    glVertex2f(-1.0f, 0.0f);

    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-0.9f, 1.0f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-1.0f, 0.9f);

    glEnd();
    glFlush();

    // Red-Diagonals
    glBegin(GL_QUADS);
    glColor3f(0.77f, 0.05f, 0.15f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-0.075f, 1.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(-0.925f, 0.0f);

    glEnd();
    glFlush();

    // Red-Diagonals
    glBegin(GL_QUADS);
    glColor3f(0.77f, 0.05f, 0.15f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(0.0f, 0.075f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-1.0f, 0.925f);

    glEnd();
    glFlush();

    //White-Portrait
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.6f, 1.0f);
    glVertex2f(-0.4f, 1.0f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();
    glFlush();

    //White-Landscape
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(-1.0f, 0.4f);

    glEnd();
    glFlush();

    //Red-Portrait
    glBegin(GL_QUADS);
    glColor3f(0.77f, 0.05f, 0.15f);
    glVertex2f(-0.575f, 1.0f);
    glVertex2f(-0.425f, 1.0f);
    glVertex2f(-0.425f, 0.0f);
    glVertex2f(-0.575f, 0.0f);

    glEnd();
    glFlush();

    //Red-Landscape
    glBegin(GL_QUADS);
    glColor3f(0.77f, 0.05f, 0.15f);
    glVertex2f(-1.0f, 0.575f);
    glVertex2f(0.0f, 0.575f);
    glVertex2f(0.0f, 0.425f);
    glVertex2f(-1.0f, 0.425f);

    glEnd();
    glFlush();

    white_star(0.535f, 0.565f);
    white_star(0.275f, 0.185f);
    white_star(0.725f, 0.25f);
    white_star(0.535f, -0.45f);

    red_star(0.535f, 0.565f);
    red_star(0.275f, 0.185f);
    red_star(0.725f, 0.25f);
    red_star(0.535f, -0.45f);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(720, 480);
    glutInitWindowPosition(350, 150);
    glutCreateWindow("New Zealand");

    init();
    glutDisplayFunc(new_zealand);
    glutMainLoop();
    return 0;
}
*/
