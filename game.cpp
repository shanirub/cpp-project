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

bool game::isguessinword(char guess) {
    
}

bool game::isnewguess(char guess) {
    
}

char game::readguess() {
    
}

bool game::isvalidguess(char guess) {
    
}

void game::correctguess(char guess) {
    
}

void game::wrongguess(char guess) {
    
}

void game::gamewon() {
    
}

void game::gamelost() {
    
}
