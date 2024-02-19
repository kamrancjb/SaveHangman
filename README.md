# SaveHangman
the program implements a simple hangman game using graphics in C++. It allows the player to guess letters to complete a hidden word and provides visual feedback on the game's progress.

Header Includes:

The program starts by including necessary header files:
graphics.h: This header file is used for graphics functions in C and C++.
<stdio.h>, <iostream>, <stdlib.h>, <time.h>: Standard C and C++ header files for input/output, standard library functions, and time-related functions.
<windows.h>: This header file is specific to Windows and provides declarations for functions used in the program.
Global Variables:

Several global variables are declared:
Constants: File paths to different images used in the game, such as images for letters, hangman stages, and the background.
gameover: A flag to indicate whether the game is over.
chances: A variable to keep track of the number of incorrect guesses.
size: The size of the current word being guessed.
Function Declarations:

char* get_random_word(char** words, int num_words): This function randomly selects a word from an array of words and returns it.
void print(char* guessWord, int size, int guessWordCopy[]): This function is responsible for printing the hangman game interface, including the hangman stages, guessed letters, and game status.
Main Function:

The program's execution begins in the main function.
The graphics window is initialized using the initwindow function from the graphics.h library.
An array my_words containing several words is defined.
A loop labeled start is used to start a new game each time the player wants to play again.
Inside the loop:
A random word is selected using the get_random_word function.
The game interface is printed using the print function.
The program enters a loop where the player can guess characters until the game is over or the maximum number of chances is reached.
After each guess, the game checks if the word has been fully guessed or if the maximum number of incorrect guesses has been reached.
If the game is over, a message is displayed, and the player is prompted to play again.
After the loop exits, the graphics window is closed.
Function Definitions:

get_random_word: This function randomly selects a word from the array of words passed to it.
print: This function prints the hangman game interface based on the current game state, including the hangman stages, guessed letters, and game status.
Overall, the program implements a simple hangman game using graphics in C++. It allows the player to guess letters to complete a hidden word and provides visual feedback on the game's progress.
