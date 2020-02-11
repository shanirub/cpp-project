#include<iostream>

class game
{
    private:
        int MAX_NMISS = 10;
        char * VALID_GUESS = "abcdefghijklmnopqrstuvwxyz";
        char guess;
        int nguess;
        int nmiss;
        char * wordtosolve;
        char * wordsofar;
        char * oldguess;

        bool isguessinword(char guess, char * wordtosolve);
        bool isnewguess(char guess);
        bool issolved(char * wordsofar);
        bool ismaxguess(int nguess);
        char readguess();
        bool isvalidguess(char guess);


    public:
        game();
        game(char * wordtoguess);
        ~game();
        void startgame();

};