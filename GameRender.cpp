#include <iostream>
#include <GLFW/glfw3.h>
#include "Core.h"
#include "GameObjects.h"
#include "GlobalVariable.h"
#include "Particle.h"
#include "GameGui.h"

//vars
float player_angle = 0;
float ADD_PER_SEC = 10;
float Player_X = 0 ;
float Player_Y = 0 ; 
float SIZEE = 0.25;

float E1_X = Player_X + (SIZEE/5);
//float E1_Y = Player_Y + (SIZEE/5);

//GLFWwindow * THE_WIN;

void Show_Attack(bool IF_){
    if(IF_ == true){
        PlayerV1(player_angle ,SIZEE , Player_X , Player_Y , 255 , 255 , 255);
    }else if(IF_ == false){

    }
}

void Render(){


    WIN_BG_COLOR(0 , 0 , 0 , 55);


        //Rend_Object SQ;
        //SQ.Square(0.5 , 0.3 , 0 , 0 ,0 ,0 , 255);
           // player_angle += ADD_PER_SEC;

           Player_X = GO_PL_X;
           Player_Y = GO_PL_Y;

           player_angle = GO_Angle;



        //end

        if(Move_Eye == true){

            E1_X = Player_X + (SIZEE/5);

        }else if(Move_Eye == false){

            E1_X =  Player_X - (SIZEE/100);

        }
        
        //else if(Move_Eye_UP == true){

         //   E1_Y =  Player_Y - (SIZEE/100);


        //}else if(Move_Eye_UP == false){

       //     E1_Y =  Player_Y + (SIZEE/5);

     //   }

        //START

        //player
        Rend_Object OBB;
        OBB.Square(SIZEE/2 , SIZEE/2 , Player_X , Player_Y , 0 , 265 , 255);

        Rend_Object E1;
        OBB.Square(SIZEE/4 , SIZEE/4 , E1_X  , Player_Y + (SIZEE/5) , 0 , 255 , 0);
        
        //show attack
        Show_Attack(SHOW_ATT);

        //END
        

        

}
