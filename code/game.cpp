#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

Game::Game(int min, int max)
    : m_min(min), m_max(max)
{
   std::srand(std::time(nullptr)); //Seed the random number generator
}

void Game::selectRandomNumber()
 {
   m_randomNumber = std::rand() % (m_max - m_min + 1) + m_min;
}

bool Game::checkGuess(int guess) {
if (guess == m_randomNumber) {
    std::cout << "Correct!" << std::endl;
  return true;
} else if (guess < m_randomNumber) {
    std::cout << "Too low." << std::endl;
} else {
    std::cout << "Too high." << std::endl;
   }
  return false;
}

int Game::getRandomNumber() const
{
return m_randomNumber;
}