#include <iostream>
#include <GLFW/glfw3.h>
//#include "Core.h"
//#include "stb_easy_font.h"
#include "GameRender.h"
#include "GlobalVariable.h"

GLFWwindow * THE_WIN;

float PL_Y;
float PL_X;

void Power_Render(){
    Render();
            //player control 
        if(glfwGetKey(THE_WIN, GLFW_KEY_W)== GLFW_PRESS){
            PL_Y += 0.01;
            GO_PL_Y = PL_Y;

            Move_Eye_UP = false;

        }else if(glfwGetKey(THE_WIN , GLFW_KEY_S) == GLFW_PRESS){

            PL_Y -= 0.01;
            GO_PL_Y = PL_Y;


            Move_Eye_UP = true;

        }else if(glfwGetKey(THE_WIN , GLFW_KEY_A) == GLFW_PRESS){

            PL_X -= 0.01;
            GO_PL_X = PL_X;

            Move_Eye = false;

           

        }else if(glfwGetKey(THE_WIN , GLFW_KEY_D) == GLFW_PRESS){

            PL_X += 0.01;
            GO_PL_X = PL_X;

            Move_Eye = true;

           


        }

        if(glfwGetKey(THE_WIN , GLFW_KEY_C) == GLFW_PRESS){

             GO_Angle += 10; 
             SHOW_ATT = true;

             Move_Eye = false;

        }else if(glfwGetKey(THE_WIN , GLFW_KEY_V) == GLFW_PRESS){

            GO_Angle -= 10;
            SHOW_ATT = true;
            Move_Eye = true;

        }else if(glfwGetKey(THE_WIN , GLFW_KEY_C) == GLFW_RELEASE){

            SHOW_ATT = false;

        }else if(glfwGetKey(THE_WIN , GLFW_KEY_V) == GLFW_RELEASE){

            SHOW_ATT = false;

        }


        glfwSwapBuffers(THE_WIN);
        glfwPollEvents();
}

int main(){
    



    if(!glfwInit()){

        std::cout<<"ERROR"<<std::endl;
        return -1;
    }

    THE_WIN = glfwCreateWindow(500 , 500 , "TriEater.Io" , NULL  , NULL);

    if(!THE_WIN ){

        std::cout<<"ERROR2"<<std::endl;
        glfwTerminate();
        return -1;

    }
    glfwMakeContextCurrent(THE_WIN);
    glViewport(0 , 0 ,500 ,500 );

    while(glfwWindowShouldClose(THE_WIN) == false){

       // Render();
       Power_Render();

        

    }

    glfwDestroyWindow(THE_WIN);
    glfwTerminate();


    return 0;
}