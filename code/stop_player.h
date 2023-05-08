#ifndef STOPPLAYER_H
#define STOPPLAYER_H

#include <string>

class StopPlayer {
public:
   
    StopPlayer();  // Constructor
    ~StopPlayer();  // Destructor

    void startGame(); // The funcion that starts the game

private:
   //private members of the fuction
    std::string playerName; // the name of the player
    int score; // the score of the player
    int guessCount; // the number of tries that the player has 
    int secretNumber; // the secret number that the player needs to guess 

    // private functions
    void generateSecretNumber(); // function for creation of the secret number 
    void checkGuess(int guess); // function for the control / check of the forecast of the player 
};

#endif // STOPPLAYER_H
