# Game_crpt
This is a game called ''Crypto''. 

This game consists of two players who secretly choose a number from 1 to 10000. The players then take turns trying to guess their opponent's number. Each time you make an attempt, your opponent gives you one of the following responses:
             
 "You better try again, my number is higher than you guessed"
             
 "You better try again, my number is lower than you guessed"
              
 "Right! You guessed my number in X tries"

The object of the game is to guess your opponent's number in as few attempts as possible. 

                       The details of the game :

(I) main.cpp: the file that contains the main function and is responsible for starting the game.

(II) game.cpp: the file that contains the functions to initialize the game, pick a random number, and check the player's attempts.

(III) game.h: the header file that contains the function declarations found in game.cpp.

(IV) player.cpp: the file that contains the function to input the player's effort.

(V) stop_player.h: the file "stopplayer.h" contains the declaration of the StopPlayer class, which represents the player in the game. It contains private data members for the player's name, his grade, the number of attempts he has made, and the secret number he must guess.

->In the 'game.h' exists the #ifndef GAME_H statement. This belongs to the Conditional Compilation technique, which is used to avoid errors related to multiple inclusion of a header file in different code files.

-> In the 'player.h' exists the #ifndef PLAYER_H statement. The #ifndef PLAYER_H means "if string PLAYER_H is not defined", then the #define PLAYER_H defines string PLAYER_H. Together these two pre-define a compilation delimiter that makes sure that the contents of the file will not be repeated if the PLAYER_H string is already defined, in order to avoid name collisions during compilation.

                      If you want to run the game:
Open the terminal on your computer, go to the code folder and run the 'make' command to compile the code. 
After compiling, you can run the game with the command './game'.