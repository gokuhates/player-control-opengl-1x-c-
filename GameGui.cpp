#include <iostream>
#include "GameGui.h"
#include "Core.h"
//#include "stdio.h"

std::string GAP = "---";

//game GUI
class STRING_ENGINE{ 
   public:
   void ALPHA_A(float X , float Y , float SIZE , int R , int G , int B){

   }
   void ALPHA_B(float X , float Y , float SIZE , int R , int G , int B){

   }
   void ALPHA_C(float X , float Y , float SIZE , int R , int G , int B){

   }
};

class NUMBER_ENGINE{
   public:
   void NUM_1(float X , float Y , float SIZE , int R , int G ,int B){

   }
   void NUM_2(float X , float Y , float SIZE , int R , int G , int B){

   }
   void NUM_3(float X , float Y , float SIZE , int R , int G , int B){

   }
};

class SYM_ENGINE{
   public:
   void COMMA(float X , float Y , float SIZE , int R , int G ,int B){
   }
   
};

void Game_Gui::DrawText(const char* Text , int R , int G , int B){

   std::cout << Text << GAP<< R << GAP<< G << GAP<< B << std::endl;

}

void Game_Gui::Button(const char* Text , int R , int G , int B , int BR , int BG , int BB , void (*function)()){

   

}