#ifndef GAME_H
#define GAME_H

class Game {

public:
  Game(int min, int max);
  void selectRandomNumber();
  bool checkGuess(int guess);
  int getRandomNumber() const;

private:
  int m_min;
  int m_max;
  int m_randomNumber;
};

#endif