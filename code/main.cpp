#include <iostream>
#include <string>
#include "game.h"
#include "player.h"

int main(){
int minNumber = 1;
int maxNumber = 10000;
int maxAttempts = 5;

std::cout << "Welcome to the Game Crypto! The objective is to guess the number thar your opponent chose." << std::endl;
std::cout << "You will have"<<maxAttempts<< "attempts to guess the number which is between"<< minNumber << "and"<< maxNumber<<"."
<< std::endl;

// Initialization of the game
Game cryptGame(minNumber, maxNumber);
cryptGame.selectRandomNumber();

// Play the game
Player player;
bool isGuessCorrect = false;

for (int i = 1; i <= maxAttempts; i++) {
   std::cout <<"Attempt"<< i <<":";
   int guess = player.makeGuess();
   isGuessCorrect = cryptGame.checkGuess(guess);
    if (isGuessCorrect) {
        std::cout << "Congratulations, you guessed the number in" << "attempts!" <<std::endl;
        break;
    }
}
if (!isGuessCorrect) {
    std::cout << "Sorry, you have used all your attempts. The number was"<< cryptGame.getRandomNumber() << std::
    }
  return 0;
}