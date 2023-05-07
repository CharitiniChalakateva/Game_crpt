TEST_F(GameTest, test_checkGuessCount) {
    int maxGuesses = 5;
    cryptGame.setMaxGuesses(maxGuesses);
    cryptGame.selectRandomNumber();
    for (int i = 0; i < maxGuesses; i++) {
        ASSERT_FALSE(cryptGame.checkGuess(cryptGame.getRandomNumber() + 1)); // Invalid guess - Too high
    }
    ASSERT_EQ(maxGuesses, cryptGame.getGuessCount()); // Check if guess count matches max guesses
}