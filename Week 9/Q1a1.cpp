#include <iostream>

unsigned long long factorialNonRecursive(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is undefined for negative numbers." << std::endl;
    } else {
        unsigned long long result = factorialNonRecursive(n);
        std::cout << "Factorial of " << n << " (non-recursive): " << result << std::endl;
    }

    return 0;
}

