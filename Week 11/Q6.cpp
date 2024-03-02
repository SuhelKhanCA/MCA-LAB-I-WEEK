#include<iostream>
#include<string>
using namespace std;

class BankAccount {
    private:
        string depositorName;
        string accountNumber;
        string accountType;
        double balance;

    public:
        // Constructor to assign initial values
        BankAccount(string name, string number, string type, double initialBalance) {
            depositorName = name;
            accountNumber = number;
            accountType = type;
            balance = initialBalance;
        }

        // Function to deposit an amount
        void deposit(double amount) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
            cout << "New Balance: " << balance << "\n";
        }

        // Function to withdraw an amount after checking
        void withdraw(double amount) {
            if(amount > balance) {
                cout << "Insufficient balance!\n";
                return;
            }
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
            cout << "New Balance: " << balance << "\n";
        }
};
int main() {
    // Create a new BankAccount object
    BankAccount account("John Doe", "123456", "Savings", 5000.00);

    // Deposit money
    account.deposit(2000.00);

    // Withdraw money
    account.withdraw(1000.00);

    return 0;
}

