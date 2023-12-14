#include <iostream>

// Function to perform division of two double values
double division(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return 0;
    }
}

// Function to compute the area of a right-angled triangle given base and height
double myTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double num1, num2;

    // Prompt the user to enter two numbers
    std::cout << "Enter two numbers for division:\n";
    std::cin >> num1 >> num2;

    // Calculate the division
    double quotient = division(num1, num2);

    // Output the quotient
    std::cout << "Quotient of division: " << quotient << std::endl;

    // Compute areas of three triangles
    for (int i = 1; i <= 3; ++i) {
        double base, height;
        
        // Prompt the user to enter base and height of the triangle
        std::cout << "\nEnter base and height of Triangle " << i << ":\n";
        std::cin >> base >> height;

        // Compute and output the area of the triangle
        double area = myTriangle(base, height);
        std::cout << "Area of Triangle " << i << ": " << area << std::endl;
    }

    return 0;
}
