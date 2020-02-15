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
        // read guess - lower case? is valid?
        // guess old?
        // guess in word?
    }

    // game ended: but how?
    if (g.issolved())
    {
        // you solved in (misses/guesses)
        // the word was
    } else
    {
        // you lost in (misses/guesses)
        // the word was
    }
    
}