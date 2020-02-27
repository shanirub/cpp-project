#include "game.hpp"
#include<iostream>
#include<string>

using namespace std;

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
    return (wordtoguess.find(guess) != string::npos);
}

bool game::isnewguess(char guess) {
    return (oldguess.find(guess) == string::npos);
}

char game::readguess() {
    char guess;
    cout << " Word left to guess:" << endl << wordsofar << endl;
    cout << " Number of misses: " << nmiss << " from max. " << MAX_NMISS << " allowed misses. " << endl;
    cout << " Letters that were already guessed: " << oldguess << endl;
    cout << " Please enter you next guess (must be a letter): ";
    cin >> guess;
    return guess;
}

bool game::isvalidguess(char guess) {
    return (VALID_GUESS.find(guess) != string::npos);
}

void game::correctguess(char guess) {
    // TODO handle multiple occurences of the letter!
    nguess++;
    oldguess += (guess);
    for (int i = 0; i < wordtoguess.length(); i++) {
        if (wordtoguess[i] == guess)
            wordsofar[i] = guess;
    }
}

void game::wrongguess(char guess) {
    nguess++;
    nmiss++;
    oldguess += (guess);
}

void game::gamewon() {
    cout << " Congratulations! You guessed the word." << endl;
    cout << " It took you " << nguess << " guesses, " << nmiss << " from them were misses." << endl;
}

void game::gamelost() {
    cout << " Oh no. You've reached the maximum number of allowed misses. That means you lost." << endl;
    cout << " The word was: " << wordtoguess << endl;
    cout << " You guessed " << nguess << " guesses." << endl;
}

bool game::issolved() {
    return (wordsofar.compare(wordtoguess) == 0);
}

bool game::ismaxguess() {
    return nmiss == MAX_NMISS;
}