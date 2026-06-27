//Q. 1 : Program to create a student record management system
#include <iostream>
#include <string>

using namespace std;

// Maximum number of students the system can hold
const int MAX_STUDENTS = 100;

// Structure to group student details
struct Student {
    int id;
    string name;
    string grade;
};

Student students[MAX_STUDENTS];
int studentCount = 0;

// Function to add a student
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "\nError: System storage is full!\n";
        return;
    }

    int id;
    cout << "\nEnter Student ID: ";
    cin >> id;

    // Check if ID already exists
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            cout << "\nError: Student with ID " << id << " already exists!\n";
            return;
        }
    }

    students[studentCount].id = id;
    cin.ignore(); // Clear input buffer

    cout << "Enter Student Name: ";
    getline(cin, students[studentCount].name);

    cout << "Enter Student Grade/Class: ";
    getline(cin, students[studentCount].grade);

    studentCount++;
    cout << "\nStudent added successfully!\n";
}

// Function to display all students
void displayStudents() {
    if (studentCount == 0) {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\n================ STUDENT LIST ================\n";
    for (int i = 0; i < studentCount; i++) {
        cout << "ID: " << students[i].id 
             << " | Name: " << students[i].name 
             << " | Grade: " << students[i].grade << "\n";
    }
    cout << "==============================================\n";
}

// Function to search for a student by ID
void searchStudent() {
    if (studentCount == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }

    int searchId;
    cout << "\nEnter Student ID to search: ";
    cin >> searchId;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == searchId) {
            cout << "\nRecord Found!\n";
            cout << "ID: " << students[i].id << "\n";
            cout << "Name: " << students[i].name << "\n";
            cout << "Grade: " << students[i].grade << "\n";
            return;
        }
    }
    cout << "\nStudent with ID " << searchId << " not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n=== STUDENT MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
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