#include <GL/glut.h>

void init(){
    glClearColor(0.75f, 0.0f, 0.0f, 0.0f);
    gluOrtho2D(-1, 1, -1, 1);
}

void morocco(){
    glClear(GL_COLOR_BUFFER_BIT);

    // Star
    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.4f, 0.2f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(0.25f, -0.55f);
    glVertex2f(-0.4f, 0.15f);
    glVertex2f(0.4f, 0.15f);
    glVertex2f(-0.25f, -0.55f);

    glEnd();
    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(720, 480);
    glutInitWindowPosition(350, 150);
    glutCreateWindow("Morocco");

    init();
    glutDisplayFunc(morocco);
    glutMainLoop();
    return 0;
}
