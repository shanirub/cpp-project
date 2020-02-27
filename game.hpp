#include<string>

using namespace std;

class game
{
    private:
        int MAX_NMISS = 10; // max. number of misses allowed
        string VALID_GUESS = "abcdefghijklmnopqrstuvwxyz"; // a string containing the allowed guesses (all the letter)
        int nguess; // number of guesses made so far
        int nmiss; // number of misses so far
        string wordtoguess; // the original word
        string wordsofar; // the word as shown during the game. each letter is represented as "-" until correctly guessed
        string oldguess; // a string containing the former guesses (in lower case)

        


    public:
        game(); // default constructor - should call the other constructor with a default word???
        game(string wordtosolve); // constructor with a word to solve
        ~game(); // deconstructor - what should it do???
  
        bool isguessinword(char guess); // returns true if the guess is correct
        bool isnewguess(char guess); // returns true if the guess was not guessed before (according to oldguess)
        bool issolved(); // returns true when the entire word was guessed. game ends - win
        bool ismaxguess(); // returns true when max. number of misses was reached. game ends - loss
        char readguess(); // reads the guess, and returns it
        bool isvalidguess(char guess); // returns true if the guess is a letter (upper or lower case)
        void correctguess(char guess); // updates wordsofar, oldguess, nguess
        void wrongguess(char guess); // updates oldguess, nguess, nmiss
        void gamewon(); // what happens when a game is lost
        void gamelost(); // what happens when a game is won

};
