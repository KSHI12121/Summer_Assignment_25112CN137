//Q. 3 : Program to create salary management system
#include <iostream>
#include <string>

using namespace std;

const int MAX_EMPLOYEES = 100;

// Structure to group salary details
struct SalaryRecord {
    int empId;
    string empName;
    double baseSalary;
    double bonus;
    double taxDeduction;
    double netSalary;
};

SalaryRecord payroll[MAX_EMPLOYEES];
int recordCount = 0;

// Function to add and calculate a payroll record
void addSalaryRecord() {
    if (recordCount >= MAX_EMPLOYEES) {
        cout << "\nError: System payroll storage is full!\n";
        return;
    }
    int id;
    cout << "\nEnter Employee ID: ";
    cin >> id;
    // Check if payroll record already exists for this ID
    for (int i = 0; i < recordCount; i++) {
        if (payroll[i].empId == id) {
            cout << "\nError: Payroll for Employee ID " << id << " already exists!\n";
            return;
        }
    }
    payroll[recordCount].empId = id;
    cin.ignore(); // Clear input buffer

    cout << "Enter Employee Name: ";
    getline(cin, payroll[recordCount].empName);

    cout << "Enter Base Monthly Salary: ₹";
    cin >> payroll[recordCount].baseSalary;

    cout << "Enter Performance Bonus: ₹";
    cin >> payroll[recordCount].bonus;

    cout << "Enter Tax Deductions: ₹";
    cin >> payroll[recordCount].taxDeduction;

    // Mathematical calculation: Net Salary = (Base + Bonus) - Tax
    payroll[recordCount].netSalary = (payroll[recordCount].baseSalary + payroll[recordCount].bonus) - payroll[recordCount].taxDeduction;

    recordCount++;
    cout << "\nSalary record added and processed successfully!\n";
}

// Function to display the payroll sheet for everyone
void displayPayrollSheet() {
    if (recordCount == 0) {
        cout << "\nNo salary records found.\n";
        return;
    }
    double totalCompanyPayout = 0;
    cout << "\n========================================= PAYROLL SHEET =========================================\n";
    for (int i = 0; i < recordCount; i++) {
        cout << "ID: " << payroll[i].empId 
             << " | Name: " << payroll[i].empName 
             << " | Base: ₹" << payroll[i].baseSalary 
             << " | Bonus: ₹" << payroll[i].bonus 
             << " | Tax: ₹" << payroll[i].taxDeduction 
             << " | NET PAY: ₹" << payroll[i].netSalary << "\n";
        
        totalCompanyPayout += payroll[i].netSalary;
    }
    cout << "=================================================================================================\n";
    cout << "Total Monthly Expenses (All Payouts): ₹" << totalCompanyPayout << "\n";
    cout << "=================================================================================================\n";
}

// Function to search payroll by Employee ID
void searchSalaryRecord() {
    if (recordCount == 0) {
        cout << "\nNo payroll records available to search.\n";
        return;
    }
    int searchId;
    cout << "\nEnter Employee ID to look up salary slip: ";
    cin >> searchId;
    
    for (int i = 0; i < recordCount; i++) {
        if (payroll[i].empId == searchId) {
            cout << "\n==================================\n";
            cout << "        SALARY SLIP GENERATED     \n";
            cout << "==================================\n";
            cout << "Employee ID   : " << payroll[i].empId << "\n";
            cout << "Employee Name : " << payroll[i].empName << "\n";
            cout << "----------------------------------\n";
            cout << "Base Salary   : ₹" << payroll[i].baseSalary << "\n";
            cout << "Bonus (+)     : ₹" << payroll[i].bonus << "\n";
            cout << "Tax Deduct (-) : ₹" << payroll[i].taxDeduction << "\n";
            cout << "----------------------------------\n";
            cout << "NET TAKE-HOME : ₹" << payroll[i].netSalary << "\n";
            cout << "==================================\n";
            return;
        }
    }
    cout << "\nNo salary record found for Employee ID " << searchId << ".\n";
}

int main() {
    int choice;
    do {
        cout << "\n=== SALARY MANAGEMENT SYSTEM ===\n";
        cout << "1. Add & Calculate Salary Record\n";
        cout << "2. View Entire Company Payroll Sheet\n";
        cout << "3. Generate Individual Salary Slip\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addSalaryRecord();
                break;
            case 2:
                displayPayrollSheet();
                break;
            case 3:
                searchSalaryRecord();
                break;
            case 4:
                cout << "\nExiting system. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}