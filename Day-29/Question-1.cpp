//Q. 1 : Program to create menu driven calculator
#include <iostream>

using namespace std;
// Function to display the menu
void showMenu() {
    cout << "\n=== MENU DRIVEN CALCULATOR ===\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exit\n";
    cout << "==============================\n";
}

int main() {
    int choice;
    double num1, num2, result;
    do {
        showMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        // Exit immediately if the user chooses 5
        if (choice == 5) {
            cout << "\nExiting the calculator. Goodbye!\n";
            break;
        }

        // Check for invalid menu choices before asking for numbers
        if (choice < 1 || choice > 5) {
            cout << "\nInvalid choice! Please select a valid option from the menu.\n";
            continue;
        }

        // Input numbers for the calculation
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // Perform operation based on choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "\nResult: " << num1 << " + " << num2 << " = " << result << "\n";
                break;
            case 2:
                result = num1 - num2;
                cout << "\nResult: " << num1 << " - " << num2 << " = " << result << "\n";
                break;
            case 3:
                result = num1 * num2;
                cout << "\nResult: " << num1 << " * " << num2 << " = " << result << "\n";
                break;
            case 4:
                // Handle division by zero
                if (num2 == 0) {
                    cout << "\nError: Division by zero is not allowed!\n";
                } else {
                    result = num1 / num2;
                    cout << "\nResult: " << num1 << " / " << num2 << " = " << result << "\n";
                }
                break;
        }

        cout << "\n-----------------------------------\n";

    } while (choice != 5);

    return 0;
}