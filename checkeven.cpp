#include <iostream>

// Function to check if a number is even
bool checkEven(int num) {
    return (num % 2 == 0);
}

// Function to find the maximum among three integers
int max(int a, int b, int c) {
    int maximum = a;
    
    if (b > maximum) {
        maximum = b;
    }
    if (c > maximum) {
        maximum = c;
    }
    
    return maximum;
}

int main() {
    int num1, num2, num3;

    // Input three integers from the user
    std::cout << "Enter three integers:\n";
    std::cin >> num1 >> num2 >> num3;

    // Output the maximum of the three integers
    int maximum = max(num1, num2, num3);
    std::cout << "The maximum of the three numbers is: " << maximum << std::endl;

    // Check if the first number is even or odd
    std::cout << num1 << " is ";
    if (checkEven(num1)) {
        std::cout << "even.\n";
    } else {
        std::cout << "odd.\n";
    }

    return 0;
}
