#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char guess; // last guess: a letter
    int nmiss; // number of misses = number of bad guesses
    int maxmiss; // max number of allowed misses, before the game is over
    bool isSolved = false; // user solved this round
    bool isEndgame = false; // the game is over (max number of misses, or round was solved)


    bool isOldGuess(char guess)
    {
        // returns true, when the user already guessed this letter
    }

    bool isInWord(char guess) 
    {
        // returns true, when the guessed letter is in the word
    }

    int updateWord(char * currentWord)
    {
        // update the word view, with all the guesses until now
    }

    // main while loop. runs for every new word
    while (!isSolved) {
        
        // read a new guess from the user
        guess = readGuess();

        if (isOldGuess(guess)) {
            /* output */
        }
        else
        {
            if (isInWord(guess)) {
                /* output */
                if (isSolved)
                {
                    /* output */
                    isEndgame = true; // solved = gameover
                }
            }
            else
            {
                /* output */
                nmiss++;
                updateHangman(nmiss);
                if (nmiss == maxmiss)
                {
                    /* output */
                    isEndgame = true; // max misses = gameover
                }
            }
            
        }
        

    } /* end of while loop*/

    /* game ended */
}