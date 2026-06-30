//Q. 1 : Program to create student record system using arrays and strings
#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    string branch;
    float mark;
};

// Simple function to create text columns
void align(string text, int space) {
    cout << text;
    for (int i = text.length(); i < space; i++) {
        cout << " ";
    }
}
// Function to add a student
void add(Student list[], int &count) {
    if (count >= 100) {
        cout << "List is full!" << endl;
        return;
    }

    Student s;
    cout << "Enter ID: ";
    cin >> s.id;

    // Check if ID already exists
    for (int i = 0; i < count; i++) {
        if (list[i].id == s.id) {
            cout << "Error: ID already exists!" << endl;
            return;
        }
    }

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Branch: ";
    getline(cin, s.branch);

    cout << "Enter Mark: ";
    cin >> s.mark;

    list[count] = s; 
    count++;
    cout << "Added successfully!" << endl;
}
// Function to print all records
void show(Student list[], int count) {
    if (count == 0) {
        cout << "No students found." << endl;
        return;
    }

    cout << "\n--------------------------------------------------" << endl;
    align("ID", 10);
    align("Name", 20);
    align("Branch", 15);
    align("Mark", 8);
    cout << "\n--------------------------------------------------" << endl;

    for (int i = 0; i < count; i++) {
        align(to_string(list[i].id), 10);
        align(list[i].name, 20);
        align(list[i].branch, 15);
        align(to_string(list[i].mark).substr(0, 5), 8);
        cout << endl;
    }
    cout << "--------------------------------------------------" << endl;
}
// Function to search for a student
void find(Student list[], int count) {
    if (count == 0) {
        cout << "List is empty." << endl;
        return;
    }

    int searchId;
    cout << "Enter ID to search: ";
    cin >> searchId;

    for (int i = 0; i < count; i++) {
        if (list[i].id == searchId) {
            cout << "\nFound Student:" << endl;
            cout << "ID: " << list[i].id << endl;
            cout << "Name: " << list[i].name << endl;
            cout << "Branch: " << list[i].branch << endl;
            cout << "Mark: " << list[i].mark << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

int main() {
    Student list[100]; 
    int count = 0;
    int choice;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Show All" << endl;
        cout << "3. Find Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        // Reset if user types a letter instead of a number
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid choice!" << endl;
            continue;
        }

        if (choice == 1) {
            add(list, count);
        } else if (choice == 2) {
            show(list, count);
        } else if (choice == 3) {
            find(list, count);
        }
    } while (choice != 4);

    cout << "Goodbye!" << endl;
    return 0;
}