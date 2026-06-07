#include <iostream>
#include <GLFW/glfw3.h>
#include "Core.h"
#include "GameObjects.h"


//player lol
void PlayerV1(float Rot_Angle, float size,
              float x, float y,
              int R, int G, int B)
{
    glPushMatrix();

   
    glTranslatef(x, y, 0);

    
    glRotatef(Rot_Angle, 0, 0, 1);

    Rend_Object OB1;
    Rend_Object OB2;

    
    OB1.Triangle(size - 0.1f,
                 0.0f,
                 0.0f,
                 R, G, B);

   // OB2.Square(size - 0.4f,
//size - 0.4f,
        //       -0.05f,
        //       -0.1f,
        //       R - 10,
        //       G - 100,
        //       B - 10);

    glPopMatrix();
}

void ObjectSpawner(float X , float Y ,void (*Tfunction)(), bool IF_){

    if(IF_ == true){

        Tfunction();

    }else{

    }

}