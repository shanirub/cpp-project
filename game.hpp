#include<iostream>

class game
{
    private:
        int MAX_NMISS = 10; // max. number of misses allowed
        char * VALID_GUESS = "abcdefghijklmnopqrstuvwxyz"; // a string containing the allowed guesses (all the letter)
        char guess; // the new guess , to be read from user every round
        int nguess; // number of guesses made so far
        int nmiss; // number of misses so far
        char * wordtosolve; // the original word
        char * wordsofar; // the word as shown during the game. each letter is represented as "-" until correctly guessed
        char * oldguess; // a string containing the former guesses (in lower case)

        bool isguessinword(char guess, char * wordtosolve); // returns true if the guess is correct
        bool isnewguess(char guess); // returns true if the guess was not guessed before (according to oldguess)
        bool issolved(char * wordsofar); // returns true when the entire word was guessed. game ends - win
        bool ismaxguess(int nguess); // returns true when max. number of misses was reached. game ends - loss
        char readguess(); // reads the guess, and returns it
        bool isvalidguess(char guess); // returns true if the guess is a letter (upper or lower case)


    public:
        game(); // default constructor - should call the other constructor with a default word???
        game(char * wordtoguess); // constructor with a word to guess
        ~game(); // deconstructor - what should it do???
        void startgame(); // the function that begins a new game. this is the first function to be called from main.cpp

};
