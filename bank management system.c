#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class to represent a Bank Account
class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(string accName, int accNumber, double initialBalance) {
        name = accName;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Method to display account details
    void displayDetails() const {
        cout << "\nAccount Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Getter for account number
    int getAccountNumber() const {
        return accountNumber;
    }
};

// Class to manage multiple bank accounts
class BankManagementSystem {
private:
    vector<BankAccount> accounts;

public:
    // Method to create a new account
    void createAccount() {
        string name;
        int accountNumber;
        double initialBalance;

        cout << "\nEnter account holder's name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter initial balance: $";
        cin >> initialBalance;

        // Create a new BankAccount object and add it to the vector
        accounts.push_back(BankAccount(name, accountNumber, initialBalance));
        cout << "Account created successfully!" << endl;
    }

    // Method to find an account by account number
    BankAccount* findAccount(int accountNumber) {
        for (auto& account : accounts) {
            if (account.getAccountNumber() == accountNumber) {
                return &account;
            }
        }
        return nullptr; // Return nullptr if account not found
    }

    // Method to deposit money into an account
    void deposit() {
        int accountNumber;
        double amount;

        cout << "\nEnter account number: ";
        cin >> accountNumber;

        BankAccount* account = findAccount(accountNumber);
        if (account) {
            cout << "Enter amount to deposit: $";
            cin >> amount;
            account->deposit(amount);
        } else {
            cout << "Account not found!" << endl;
        }
    }

    // Method to withdraw money from an account
    void withdraw() {
        int accountNumber;
        double amount;

        cout << "\nEnter account number: ";
        cin >> accountNumber;

        BankAccount* account = findAccount(accountNumber);
        if (account) {
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            account->withdraw(amount);
        } else {
            cout << "Account not found!" << endl;
        }
    }

    // Method to display account details
    void displayAccountDetails() {
        int accountNumber;

        cout << "\nEnter account number: ";
        cin >> accountNumber;

        BankAccount* account = findAccount(accountNumber);
        if (account) {
            account->displayDetails();
        } else {
            cout << "Account not found!" << endl;
        }
    }
};

// Main function to drive the program
int main() {
    BankManagementSystem bankSystem;
    int choice;

    while (true) {
        cout << "\n===== Bank Management System =====" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Display Account Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bankSystem.createAccount();
                break;
            case 2:
                bankSystem.deposit();
                break;
            case 3:
                bankSystem.withdraw();
                break;
            case 4:
                bankSystem.displayAccountDetails();
                break;
            case 5:
                cout << "Exiting the system. Thank you!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
