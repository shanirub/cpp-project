#include "game.hpp"
#include<iostream>


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
        if (g.isvalidguess(guess))
        {
            cout << " Invalid guess. Please try again.";
            continue;
        } else {
            (guess < 97) ? guess+=22 : guess ;
        }
        
        // guess old?
        if (!g.isnewguess(guess))
        {
            cout << " Old guess. Please try again.";
            continue;
            /* TODO  modify flowchart. flow back to readguess missing */
        }
        
        // guess in word?
        if (g.isguessinword(guess))
        {
            // correct guess
        } else
        {
            // wrong guess
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
    
}