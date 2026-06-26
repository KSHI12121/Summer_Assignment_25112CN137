//Q. 3 : Program to create ATM simulation
#include <iostream>

int main() {
    int correctPin = 7891;
    int enteredPin;
    double balance = 75000.00; // Starting money
    int choice;
    double amount;

    std::cout << "--- WELCOME TO THE ATM ---" << std::endl;

    //PIN Security Verification
    std::cout << "Enter your 4-digit PIN: ";
    std::cin >> enteredPin;

    if (enteredPin != correctPin) {
        std::cout << "Incorrect PIN! Access Denied." << std::endl;
        return 0; // Stops the program immediately
    }

    std::cout << "PIN Verified Successfully!\n";

    //Main ATM Loop Menu
    do {
        std::cout << "\n--- ATM MENU ---" << std::endl;
        std::cout << "1. Check Balance" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Choose an option (1-4): ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                std::cout << "Your balance is: ₹" << balance << std::endl;
                break;

            case 2:
                std::cout << "Enter deposit amount: ₹";
                std::cin >> amount;
                if (amount > 0) {
                    balance = balance + amount;
                    std::cout << "Successfully deposited ₹" << amount << std::endl;
                } else {
                    std::cout << "Invalid amount!" << std::endl;
                }
                break;

            case 3:
                std::cout << "Enter withdrawal amount: ₹";
                std::cin >> amount;
                if (amount > balance) {
                    std::cout << "Insufficient money!" << std::endl;
                } else if (amount <= 0) {
                    std::cout << "Invalid amount!" << std::endl;
                } else {
                    balance = balance - amount;
                    std::cout << "Successfully withdrew ₹" << amount << std::endl;
                }
                break;

            case 4:
                std::cout << "Thank you for using the ATM. Goodbye!" << std::endl;
                break;

            default:
                std::cout << "Invalid selection! Try again." << std::endl;
        }

    } while (choice != 4); //Until user's choice is exit

    return 0;
}
