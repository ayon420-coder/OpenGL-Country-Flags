#include <GL/glut.h>

void init(){
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    gluOrtho2D(-1, 1, -1, 1);
}

void star(float cpx, float cpy){
    float p1x = cpx;
    float p1y = cpy+0.05f;
    float p2x = cpx+0.035f;
    float p2y = cpy+0.01f;
    float p3x = cpx+0.025f;
    float p3y = cpy-0.045f;
    float px = cpx;
    float py = cpy-0.025f;
    float p4x = cpx-0.025f;
    float p4y = cpy-0.045f;
    float p5x = cpx-0.035f;
    float p5y = cpy+0.01f;

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

void usa(){
    glClear(GL_COLOR_BUFFER_BIT);

    // Red stripes
    glColor3f(0.8f, 0.06f, 0.13f);
    for (int i=0; i<7; i++) {
        float top = 1.0f-(0.306*i);
        float bottom = top-0.153;
        glBegin(GL_QUADS);
            glVertex2f(-1.0f, top);
            glVertex2f(1.0f, top);
            glVertex2f(1.0f, bottom);
            glVertex2f(-1.0f, bottom);

        glEnd();
        glFlush();
    }

    // Blue Quad
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.12f, 0.38f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-0.25f, 1.0f);
    glVertex2f(-0.25f, -0.08f);
    glVertex2f(-1.0f, -0.08f);

    glEnd();
    glFlush();

    for(int i=0; i<9; i++){
        if(i%2==0){
            for(int j=0; j<6; j++){
                float x = -0.9+(0.1*j);
                float y = 0.9-(0.1*i);
                star(x, y);
            }
        }
        else{
            for(int j=0; j<5; j++){
                float x = -0.85+(0.1*j);
                float y = 0.9-(0.1*i);
                star(x, y);
            }
        }
    }

}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(720, 480);
    glutInitWindowPosition(350, 150);
    glutCreateWindow("United States of America");

    init();
    glutDisplayFunc(usa);
    glutMainLoop();
    return 0;
}
