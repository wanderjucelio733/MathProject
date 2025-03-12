
// This program demonstrates how to use the C++ standard library to generate a random number between 1 and 6.
#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    // Initialize the random seed
    srand(time(0));

    // Generate a random number between 1 and 6
    int randomNumber = rand() % 6 + 1;

    // Print the result
    std::cout << "Random Number: " << randomNumber << "\n";

    return 0;
}