//Q. 2 : Program to create a bank account management system
#include <iostream>
#include <string>

using namespace std;
const int MAX_ACCOUNTS = 100;

// Structure to group bank account details
struct Account {
    int accountNumber;
    string holderName;
    double balance;
};

Account accounts[MAX_ACCOUNTS];
int accountCount = 0;
// Function to create a new account
void createAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        cout << "\nError: System storage is full! Cannot create more accounts.\n";
        return;
    }

    int accNum;
    cout << "\nEnter New Account Number: ";
    cin >> accNum;

    // Check if Account Number already exists
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            cout << "\nError: An account with number " << accNum << " already exists!\n";
            return;
        }
    }

    accounts[accountCount].accountNumber = accNum;
    cin.ignore(); // Clear input buffer

    cout << "Enter Account Holder Name: ";
    getline(cin, accounts[accountCount].holderName);

    cout << "Enter Initial Deposit Amount: $";
    cin >> accounts[accountCount].balance;

    if (accounts[accountCount].balance < 0) {
        cout << "Warning: Initial balance cannot be negative. Setting balance to $0.\n";
        accounts[accountCount].balance = 0;
    }

    accountCount++;
    cout << "\nAccount created successfully!\n";
}
// Function to deposit money into an account
void depositMoney() {
    if (accountCount == 0) {
        cout << "\nNo account records available.\n";
        return;
    }
    int accNum;
    cout << "\nEnter Account Number for Deposit: ";
    cin >> accNum;

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            double amount;
            cout << "Current Balance: $" << accounts[i].balance << "\n";
            cout << "Enter Amount to Deposit: $";
            cin >> amount;

            if (amount <= 0) {
                cout << "\nError: Deposit amount must be greater than zero!\n";
            } else {
                accounts[i].balance += amount;
                cout << "\n$" << amount << " deposited successfully!\n";
                cout << "New Balance: $" << accounts[i].balance << "\n";
            }
            return;
        }
    }
    cout << "\nAccount number " << accNum << " not found.\n";
}

// Function to withdraw money from an account
void withdrawMoney() {
    if (accountCount == 0) {
        cout << "\nNo account records available.\n";
        return;
    }
    int accNum;
    cout << "\nEnter Account Number for Withdrawal: ";
    cin >> accNum;
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            double amount;
            cout << "Current Balance: $" << accounts[i].balance << "\n";
            cout << "Enter Amount to Withdraw: $";
            cin >> amount;

            if (amount <= 0) {
                cout << "\nError: Withdrawal amount must be greater than zero!\n";
            } else if (amount > accounts[i].balance) {
                cout << "\nError: Insufficient balance! Transaction canceled.\n";
            } else {
                accounts[i].balance -= amount;
                cout << "\n$" << amount << " withdrawn successfully!\n";
                cout << "Remaining Balance: $" << accounts[i].balance << "\n";
            }
            return;
        }
    }
    cout << "\nAccount number " << accNum << " not found.\n";
}
// Function to search and display details of a specific account
void balanceInquiry() {
    if (accountCount == 0) {
        cout << "\nNo account records available.\n";
        return;
    }
    int accNum;
    cout << "\nEnter Account Number for Balance Inquiry: ";
    cin >> accNum;

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            cout << "\n================ ACCOUNT DETAILS ================\n";
            cout << "Account Number : " << accounts[i].accountNumber << "\n";
            cout << "Holder Name    : " << accounts[i].holderName << "\n";
            cout << "Current Balance: $" << accounts[i].balance << "\n";
            cout << "=================================================\n";
            return;
        }
    }
    cout << "\nAccount number " << accNum << " not found.\n";
}
// Function to display all active accounts in the system
void displayAllAccounts() {
    if (accountCount == 0) {
        cout << "\nNo accounts found in the system.\n";
        return;
    }
    cout << "\n==================== ALL ACCOUNTS ====================\n";
    for (int i = 0; i < accountCount; i++) {
        cout << "Acc No: " << accounts[i].accountNumber 
             << " | Name: " << accounts[i].holderName 
             << " | Balance: $" << accounts[i].balance << "\n";
    }
    cout << "======================================================\n";
}

int main() {
    int choice;
    do {
        cout << "\n=== BANK ACCOUNT MANAGEMENT SYSTEM ===\n";
        cout << "1. Create New Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Balance Inquiry (Search)\n";
        cout << "5. Display All Accounts\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                balanceInquiry();
                break;
            case 5:
                displayAllAccounts();
                break;
            case 6:
                cout << "\nExiting Bank System. Thank you!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}