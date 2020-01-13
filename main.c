#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char guess;
    int nmiss;
    int maxmiss;
    bool isSolved, isEndgame;

    bool isOldGuess(char guess)
    {

    }

    bool isInWord(char guess) 
    {

    }
    while (!isSolved) {
        
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
                    isEndgame = true;
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
                    isEndgame = true;
                }
            }
            
        }
        

    } /* end of while loop*/

    /* game ended */
}