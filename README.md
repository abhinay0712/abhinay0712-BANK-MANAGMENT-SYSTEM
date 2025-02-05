# Bank Management System

![GitHub](https://img.shields.io/badge/Language-C%2B%2B-blue)
![GitHub](https://img.shields.io/badge/Status-Complete-brightgreen)
![GitHub](https://img.shields.io/badge/License-MIT-orange)

A **Bank Management System** implemented in C++ using Object-Oriented Programming (OOP) principles. This project is designed to manage bank accounts, including features like account creation, deposit, withdrawal, and balance inquiry.

---

## Features

- **Account Creation**: Create a new bank account with details like name, account number, and initial balance.
- **Deposit Money**: Add funds to an existing account.
- **Withdraw Money**: Deduct funds from an existing account (with balance validation).
- **Check Balance**: Display the current balance of an account.
- **Display Account Details**: Show all details of an account.
- **User-Friendly Menu**: A simple and intuitive menu-driven interface.

---

## How It Works

The system is built using two main classes:
1. **BankAccount**: Represents a single bank account with attributes like name, account number, and balance. It provides methods for deposit, withdrawal, and displaying account details.
2. **BankManagementSystem**: Manages multiple bank accounts and provides functionalities like account creation, deposit, withdrawal, and displaying account details.

---

## Code Structure

- **BankAccount Class**:
  - Encapsulates account details (name, account number, balance).
  - Provides methods for deposit, withdrawal, and displaying account details.

- **BankManagementSystem Class**:
  - Manages a collection of `BankAccount` objects.
  - Provides methods for account creation, deposit, withdrawal, and displaying account details.

- **Main Function**:
  - Implements a menu-driven interface for user interaction.

---

## How to Run the Code

### Prerequisites
- A C++ compiler (e.g., GCC, Clang, or MSVC).
- A terminal or command prompt.

### Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/abhinay0712/bank-management-system.git
