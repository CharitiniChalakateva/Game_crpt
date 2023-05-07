TEST_F(GameTest, test_checkRange) {
    cryptGame.selectRandomNumber();
    ASSERT_GE(cryptGame.getRandomNumber(), cryptGame.getMinNumber()); // Check that the random number is greater than or equal to
                                                                      // the minimum number
    ASSERT_LE(cryptGame.getRandomNumber(), cryptGame.getMaxNumber()); // Check that the random number is less than or equal to 
                                                                      //the maximum number
}

TEST_F(GameTest, test_checkGuessCount) {
    cryptGame.selectRandomNumber();
    cryptGame.guessNumber(cryptGame.getRandomNumber()); // Make the correct guess
    ASSERT_EQ(cryptGame.getGuessCount(), 1); // Check that the guess count is incremented by 1 after a guess
    cryptGame.guessNumber(cryptGame.getRandomNumber() - 1); // Make an invalid guess
    ASSERT_EQ(cryptGame.getGuessCount(), 2); // Check that the guess count is incremented by 1 after an invalid guess
    cryptGame.guessNumber(cryptGame.getRandomNumber() + 1); // Make another invalid guess
    ASSERT_EQ(cryptGame.getGuessCount(), 3); // Check that the guess count is incremented by 1 after another invalid guess
}
