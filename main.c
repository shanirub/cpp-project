#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    #define WORD dynamikumfang // test word
    #define MAX_MISSES 10

    char guess; // last guess: a letter
    int nmiss; // number of misses = number of bad guesses
    int nguess; // number of guesses
    int maxmiss; // max number of allowed misses, before the game is over
    bool isSolved = false; // user solved this round
    bool isEndgame = false; // the game is over (max number of misses, or round was solved)
    char * currentWord; // the guessed word until now. unknown letter represented as "?"
    char * guesses; // saved old guesses

    
    char readGuess(void)
    {
        char guess;
        printf("What is your next guess?\n");
        guess = getc();
        return guess;
    }

    int resetValues()
    {
        // resets values before a new word?
        nmiss = 0;
        nguess = 0;
        maxmiss = MAX_MISSES;
        isSolved = false;
        isEndgame = false;
        currentWord = (char)malloc(sizeof(char)*20);
    }

    /** returns true, when the user already guessed this letter **/
    bool isOldGuess(char guess)
    {
        if (strchr(guesses, guess)==NULL)
            return false;
        else
            return true;   
    }

    /** returns true, when the guessed letter is in the word **/
    bool isInWord(char guess) 
    {
        if (strchr(WORD, guess)==NULL)
            return false;
        else
            return true;
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