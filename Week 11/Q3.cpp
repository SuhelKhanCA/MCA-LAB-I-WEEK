#include <iostream>

int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int sumOfAlternateDigits(int num) {
    int digit1 = num / 1000; // first digit
    int digit2 = (num / 100) % 10; // second digit
    int digit3 = (num / 10) % 10; // third digit
    int digit4 = num % 10; // fourth digit

    return (digit1 + digit3) + (digit2 + digit4);
}

int main() {
    int num, choice;

    std::cout << "Enter a 4-digit number: ";
    std::cin >> num;

    std::cout << "Choose the operation:\n";
    std::cout << "1. Reverse the number\n";
    std::cout << "2. Sum of number with its reverse\n";
    std::cout << "3. Sum of alternate digits\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Reverse: " << reverseNumber(num) << std::endl;
            break;
        case 2:
            std::cout << "Sum with reverse: " << num + reverseNumber(num) << std::endl;
            break;
        case 3:
            std::cout << "Sum of alternate digits: " << sumOfAlternateDigits(num) << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }

    return 0;
}

