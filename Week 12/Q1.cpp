#include<iostream>
using namespace std;

class Demo {
    private:
        int a, b;

    public:
        // Default constructor
        Demo(int x, int y) {
            a = x;
            b = y;
        }

        // Member function to display the values
        void display() {
            cout << "a: " << a << ", b: " << b << endl;
        }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create an object of Demo with user input
    Demo d(num1, num2);

    // Call the display function
    d.display();

    return 0;
}

