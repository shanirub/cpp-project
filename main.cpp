#include "game.hpp"
#include<iostream>

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");

int main()
{
    string originalword = string("everythingness");
    char guess;

    game g = game(originalword);

    // a loop as long as the game didn't end
    while (!g.issolved() && !g.ismaxguess())
    {
        // read guess
        guess = g.readguess();

        // isvalid?
        if (!g.isvalidguess(guess))
        {
            cout << red << " Invalid guess. Please try again: Use only lower case letters";
            continue;
        }
        
        
        // guess old?
        if (!g.isnewguess(guess))
        {
            cout << red << " Old guess. Please try again.";
            continue;
            /* TODO  modify flowchart. flow back to readguess missing */
        }
        
        // guess in word?
        if (g.isguessinword(guess))
        {
            // correct guess
            g.correctguess(guess);
        } else
        {
            // wrong guess
            g.wrongguess(guess);
        }
        
    }

    // game ended: but how?
    if (g.issolved())
    {
        // you solved in (misses/guesses)
        // the word was
        g.gamewon();
    } else
    {
        // you lost in (misses/guesses)
        // the word was
        g.gamelost();
    }

    // delete g;
    
}