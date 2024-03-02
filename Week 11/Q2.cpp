#include <iostream>

int main() {
    int num1, num2, choice;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Choose the operation:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case 3:
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case 4:
            if (num2 != 0)
                std::cout << "Result: " << static_cast<double>(num1) / num2 << std::endl;
            else
                std::cout << "Error! Division by zero is not allowed." << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }

    return 0;
}

