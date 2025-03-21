// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: March 18, 2025
// The code is a guessing game using if statements
// as answer to the user possible guesses

#include <iostream>

int main() {
    // defined random number constant
    const int RANDOM_NUMBER = 8;
    // Declare as an integer the user input
    int guess_number;

    // Initial message explaining the game
    // and guess from the user
    std::cout << "Guess the random number from 1 to 10: ";
    std::cin >> guess_number;

    // If statement for wrong answer
    if (guess_number != RANDOM_NUMBER) {
        std::cout << "Wrong number, the right answer was "
        << RANDOM_NUMBER << std::endl;
    }

    // If statement for right answer
    if (guess_number == RANDOM_NUMBER) {
        std::cout << "You got it right!" << std::endl;
    }

    return 0;
}
