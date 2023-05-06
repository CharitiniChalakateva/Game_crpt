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

bool Game::checkGuess(int guess) { // Guess a number 
if (guess == m_randomNumber) { // If the guessed number is equal to the secret number 
    std::cout << "Correct!" << std::endl;
  return true;
} else if (guess < m_randomNumber) { // If the guessed number is lower that the secret number 
    std::cout << "Too low." << std::endl;
} else {
    std::cout << "Too high." << std::endl; // If the guessed number is higher than the secret number 
   }
  return false;
}

int Game::getRandomNumber() const
{
return m_randomNumber;
}