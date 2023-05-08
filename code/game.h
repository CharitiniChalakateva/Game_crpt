#ifndef GAME_H //used to avoid errors related to multiple inclusion of a header file
#define GAME_H
#include "stopplayer.h"

class Game {

public:
  Game(int min, int max); //constructor
  void selectRandomNumber(); // selection of a randome number between min and max  
  bool checkGuess(int guess); //used to check if the number guessed by a player is a correct number
  int getRandomNumber() const; //returns the number randomly selected by the function

private:
  //private members of the fuction
  int m_min;
  int m_max;
  int m_randomNumber;
};

#endif