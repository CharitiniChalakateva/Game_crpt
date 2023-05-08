#include <iostream>

int main() {
    int range, numAttempts;
    
    std::cout << "Enter the range of the secret number: ";
    std::cin >> range;

    std::cout << "Enter the number of attempts: ";
    std::cin >> numAttempts;

    std::cout << "Range of secret number: " << range << std::endl;
    std::cout << "Number of attempts: " << numAttempts << std::endl;

    return 0;
}
