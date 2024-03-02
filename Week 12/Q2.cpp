#include<iostream>
using namespace std;

class Calculator {
    private:
        int a, b, c, d;

    public:
        // Default constructor
        Calculator() {
            a = b = c = d = 0;
        }

        // Parameterized constructor with two parameters
        Calculator(int x, int y) {
            a = x;
            b = y;
            c = d = 0;
        }

        // Parameterized constructor with four parameters
        Calculator(int x, int y, int z, int w) {
            a = x;
            b = y;
            c = z;
            d = w;
        }

        // Member function to perform calculations and display the results
        void calculate() {
            cout << "Sum: " << a + b + c + d << endl;
            cout << "Product: " << a * b * c * d << endl;
        }
};

int main() {
    // Create objects of Calculator with different constructors
    Calculator calc1;
    Calculator calc2(10, 20);
    Calculator calc3(1, 2, 3, 4);

    // Perform calculations
    cout << "For calc1:\n";
    calc1.calculate();
    cout << "\nFor calc2:\n";
    calc2.calculate();
    cout << "\nFor calc3:\n";
    calc3.calculate();

    return 0;
}

