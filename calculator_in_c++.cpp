#include <iostream>

int main() {
    double num1, num2;
    char op;

    std::cout << "Simple Calculator\n";

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    double result = 0;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Cannot divide by zero.\n";
                return 1;
            }
            break;
        default:
            std::cout << "Error: Invalid operator.\n";
            return 1;
    }

    std::cout << "Result: " << result << "\n";

    return 0;
}
