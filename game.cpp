#include "game.hpp"
#include<iostream>
#include<string>

game::game()
{
    game("default");
}

game::game(string wordtoguess)
{
    wordtoguess = string(wordtoguess);
    nguess = 0;
    nmiss = 0;
    wordsofar = string(wordtoguess.length(), '-');//fill constructor
    oldguess = string();
}

game::~game()
{
    // delete stuff from memory
}