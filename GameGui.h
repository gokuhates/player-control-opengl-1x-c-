class Game_Gui{
    public:
    void DrawText(const char* Text , int R , int G , int B);

    void Button(const char* Text , int R , int G , int B , int BR , int BG , int BB , void (*function)());
    
};