TEST_F(GameTest, test_selectRandomNumber) {
    int min = 1;
    int max = 10000;
    Game game{min, max};

    // Run selectRandomNumber multiple times and check that the generated number is within the expected range
    for (int i = 0; i < 100; i++) {
        game.selectRandomNumber();
        int randomNumber = game.getRandomNumber();
        ASSERT_TRUE(randomNumber >= min && randomNumber <= max);
    }
}