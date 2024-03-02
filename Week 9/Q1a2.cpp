#include <iostream>

unsigned long long factorialRecursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return static_cast<unsigned long long>(n) * factorialRecursive(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is undefined for negative numbers." << std::endl;
    } else {
        unsigned long long result = factorialRecursive(n);
        std::cout << "Factorial of " << n << " (recursive): " << result << std::endl;
    }

    return 0;
}

