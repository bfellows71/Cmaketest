//
// Created by FAST on 11/28/2023.
//

#include <iostream>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Calculate and print the factorial of 5
    int result = factorial(5);
    std::cout << "Factorial of 5 is: " << result << std::endl;

    return 0;
}
