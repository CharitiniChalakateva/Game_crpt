#include <gtest/gtest.h>
#include "game.h"

class GameTest : public ::testing::Test {
    
protected:
    Game cryptGame{1, 10000}; // Create a new Game object for each test case
};

TEST_F(GameTest, test_checkGuess) {
    cryptGame.selectRandomNumber();
    ASSERT_TRUE(cryptGame.checkGuess(cryptGame.getRandomNumber())); // This is the correct guess
    ASSERT_FALSE(cryptGame.checkGuess(cryptGame.getRandomNumber() - 1)); // Invalid guess - Too low
    ASSERT_FALSE(cryptGame.checkGuess(cryptGame.getRandomNumber() + 1)); // Invalid guess - Too high
}