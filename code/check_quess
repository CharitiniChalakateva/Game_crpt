#include <iostream>
#include <cassert>
#include "game.h"

void test_checkGuess()
{
    std::cout << "Running test_checkGuess...\n";

    Game g(1, 10000);
    g.m_randomNumber = 50;

    // Test a correct guess
    assert(g.checkGuess(50) == true);

    // Test a guess that is too low
    assert(g.checkGuess(25) == false);

    // Test a guess that is too high
    assert(g.checkGuess(75) == false);

    std::cout << "test_checkGuess passed!\n";
}
