#include <iostream>

// Function to swap two numbers by value
void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Swapped values (Call by Value): a = " << a << ", b = " << b << std::endl;
}

// Function to swap two numbers by reference
void swap_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Swapped values (Call by Reference): a = " << a << ", b = " << b << std::endl;
}

int main() {
    int a, b;
    char choice;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Choose the mechanism (V for Call by Value, R for Call by Reference): ";
    std::cin >> choice;

    switch (choice) {
        case 'V':
        case 'v':
            swap_value(a, b);
            break;
        case 'R':
        case 'r':
            swap_reference(a, b);
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    std::cout << "Original values: a = " << a << ", b = " << b << std::endl;

    return 0;
}

