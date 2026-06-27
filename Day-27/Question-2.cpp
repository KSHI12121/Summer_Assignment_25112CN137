//Q. 2 : Program to create employee management system
#include <iostream>
#include <string>

using namespace std;

// Maximum number of employees the system can hold
const int MAX_EMPLOYEES = 100;

// Structure to group employee details
struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;

// Function to add an employee
void addEmployee() {
    if (employeeCount >= MAX_EMPLOYEES) {
        cout << "\nError: System storage is full!\n";
        return;
    }

    int id;
    cout << "\nEnter Employee ID: ";
    cin >> id;

    // Check if ID already exists
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            cout << "\nError: Employee with ID " << id << " already exists!\n";
            return;
        }
    }
    employees[employeeCount].id = id;
    cin.ignore(); // Clear input buffer

    cout << "Enter Employee Name: ";
    getline(cin, employees[employeeCount].name);

    cout << "Enter Department: ";
    getline(cin, employees[employeeCount].department);

    cout << "Enter Salary: ";
    cin >> employees[employeeCount].salary;

    employeeCount++;
    cout << "\nEmployee record added successfully!\n";
}

// Function to display all employees
void displayEmployees() {
    if (employeeCount == 0) {
        cout << "\nNo employee records found.\n";
        return;
    }
    cout << "\n==================== EMPLOYEE LIST ====================\n";
    for (int i = 0; i < employeeCount; i++) {
        cout << "ID: " << employees[i].id 
             << " | Name: " << employees[i].name 
             << " | Dept: " << employees[i].department 
             << " | Salary: ₹" << employees[i].salary << "\n";
    }
    cout << "=======================================================\n";
}

// Function to search for an employee by ID
void searchEmployee() {
    if (employeeCount == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }
    int searchId;
    cout << "\nEnter Employee ID to search: ";
    cin >> searchId;

    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == searchId) {
            cout << "\nRecord Found!\n";
            cout << "ID: " << employees[i].id << "\n";
            cout << "Name: " << employees[i].name << "\n";
            cout << "Department: " << employees[i].department << "\n";
            cout << "Salary: ₹" << employees[i].salary << "\n";
            return;
        }
    }
    cout << "\nEmployee with ID " << searchId << " not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n=== EMPLOYEE MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                cout << "\nExiting program. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}