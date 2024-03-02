#include<iostream>
using namespace std;

void printMenu() {
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
}

int main() {
    int choice;
    double num1, num2;
    while(true) {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Result: " << num1 + num2 << "\n";
                break;
            case 2:
                cout << "Result: " << num1 - num2 << "\n";
                break;
            case 3:
                cout << "Result: " << num1 * num2 << "\n";
                break;
            case 4:
                if(num2 != 0)
                    cout << "Result: " << num1 / num2 << "\n";
                else
                    cout << "Error! Division by zero is not allowed.\n";
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}

