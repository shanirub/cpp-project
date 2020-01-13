# cpp-project
a project for c/c++ course.

***idea for an algorithm:***

**vars**
guess: letter every turn
miss: number of misses
max-misses: max allowed misses
isOldGuess: function
isInWord: function
isSolved: bool
isEndGame: bool

start loop (while loop)

if already guessed
    message
    ignore
else
    if guess in word
        message
        show guess
        if solved
            message
            end game
    else
        message
        miss++
        if miss > max-misses
            message
            end game
        update hangman

end loop
