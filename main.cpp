// main.cpp
#include <iostream>
#include "calculator.h"
#include "helper_functions.h"

int main() {
    Calculator calculator;

    // Perform some calculations
    int resultAdd = calculator.add(5, 7);
    int resultMultiply = calculator.multiply(3, 4);

    // Display results and greet the user
    std::cout << "Result of addition: " << resultAdd << std::endl;
    std::cout << "Result of multiplication: " << resultMultiply << std::endl;

    greetUser("John");

    return 0;
}
