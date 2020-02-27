#include "game.hpp"
#include<iostream>
#include<string>

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");

using namespace std;

game::game()
{
    game("default");
}

game::game(string word)
{
    wordtoguess = string(word);
    nguess = 0;
    nmiss = 0;
    wordsofar = string(word.length(), '-');//fill constructor
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
    cout << reset << " Word left to guess:" << endl << yellow << wordsofar << reset << endl;
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
    cout << green << " Congratulations! You guessed the word:" << wordtoguess << endl;
    cout << " It took you " << nguess << " guesses, " << nmiss << " from them were misses." << endl;
}

void game::gamelost() {
    cout << red << " Oh no. You've reached the maximum number of allowed misses. That means you lost." << endl;
    cout << " The word was: " << wordtoguess << endl;
    cout << " You guessed " << nguess << " guesses." << endl;
}

bool game::issolved() {
    return (wordsofar.compare(wordtoguess) == 0);
}

bool game::ismaxguess() {
    return nmiss == MAX_NMISS;
}