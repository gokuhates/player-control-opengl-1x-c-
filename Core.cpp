#include <iostream>
#include <GLFW/glfw3.h>
#include "Core.h"

void Rend_Object::Square(float H, float W,
                         float Pos_X, float Pos_Y,
                         int R, int G, int B)
{
    glColor3ub(R, G, B);

    glBegin(GL_TRIANGLES);

    
    glVertex2f(Pos_X,       Pos_Y);
    glVertex2f(Pos_X + W,   Pos_Y);
    glVertex2f(Pos_X + W,   Pos_Y + H);

    
    glVertex2f(Pos_X,       Pos_Y);
    glVertex2f(Pos_X + W,   Pos_Y + H);
    glVertex2f(Pos_X,       Pos_Y + H);

    glEnd();
}

void WIN_BG_COLOR(double R , double G , double B , double A){

    glClearColor(R , G , B , A);
    glClear(GL_COLOR_BUFFER_BIT);

}

void Rend_Object::Triangle(float SIZE , float Pos_X , float Pos_Y , int R , int G , int B){

    glBegin(GL_TRIANGLES);

   // glRotatef(Angle , Pos_X , Pos_Y , 1);

    glColor3ub(R , G , B);

   glVertex2f(Pos_X, Pos_Y);
   glVertex2f(Pos_X + SIZE / 2, Pos_Y + SIZE);
   glVertex2f(Pos_X + SIZE, Pos_Y);
    glEnd();

}

