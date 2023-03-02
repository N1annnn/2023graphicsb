#include <GL/glut.h>
#include <stdio.h>
float X=0,Y=0,Z=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(-0.79,0.40);
    glVertex2f(-0.79,0.40);
    glVertex2f(-0.75,0.47);
    glVertex2f(-0.71,0.53);
    glVertex2f(-0.62,0.56);
    glVertex2f(-0.57,0.53);
    glVertex2f(-0.53,0.41);
    glVertex2f(-0.51,0.35);
    glVertex2f(-0.49,0.32);
    glVertex2f(-0.79,0.29);
    glVertex2f(-0.91,0.13);
    glVertex2f(-0.87,0.03);
    glVertex2f(-0.81,-0.02);
    glVertex2f(-0.74,-0.11);
    glVertex2f(-0.46,-0.13);
    glVertex2f(-0.10,-0.14);
    glVertex2f(0.09,-0.08);
    glVertex2f(0.09,0.17);
    glVertex2f(-0.08,0.22);
    glVertex2f(-0.31,0.23);
    glVertex2f(-0.60,0.23);
    glVertex2f(-0.29,0.29);
    glVertex2f(-0.21,0.43);
    glVertex2f(0.07,0.54);
    glVertex2f(0.09,0.34);
    glVertex2f(0.06,0.28);
    glEnd();
    glutSwapBuffers();
}
void mouse(int button, int state, int x ,int y)
{
    X = (x-150)/150.0;
    Y= -(y-150)/150.0;
    if(state==GLUT_DOWN) printf("    glVertex2f(%.2f,%.2f);\n",X,Y);
}
int main(int argc, char* argv[] )
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("Week03");

    glutMouseFunc(mouse);
    glutDisplayFunc(display);

    glutMainLoop();
}
