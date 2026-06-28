//Q. 4 : Program to create a contact management system
#include <iostream>
#include <string>

using namespace std;
const int MAX_CONTACTS = 100;

// Structure to group contact details
struct Contact {
    int id;
    string name;
    string phone;
};

Contact contacts[MAX_CONTACTS];
int contactCount = 0;
// Function to add a new contact
void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        cout << "\nError: System storage is full! Cannot add more contacts.\n";
        return;
    }
    int id;
    cout << "\nEnter Contact ID: ";
    cin >> id;

    // Check if ID already exists
    for (int i = 0; i < contactCount; i++) {
        if (contacts[i].id == id) {
            cout << "\nError: Contact with ID " << id << " already exists!\n";
            return;
        }
    }

    contacts[contactCount].id = id;
    cin.ignore(); // Clear input buffer

    cout << "Enter Name: ";
    getline(cin, contacts[contactCount].name);

    cout << "Enter Phone Number: ";
    getline(cin, contacts[contactCount].phone);

    contactCount++;
    cout << "\nContact added successfully!\n";
}
// Function to display all contacts
void displayContacts() {
    if (contactCount == 0) {
        cout << "\nNo contacts found.\n";
        return;
    }

    cout << "\n======================= CONTACT LIST =======================\n";
    for (int i = 0; i < contactCount; i++) {
        cout << "ID: " << contacts[i].id 
             << " | Name: " << contacts[i].name 
             << " | Phone: " << contacts[i].phone << "\n";
    }
    cout << "============================================================\n";
}
// Function to search for a contact by Name
void searchContact() {
    if (contactCount == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }

    cin.ignore(); // Clear input buffer before using getline
    string searchName;
    cout << "\nEnter Contact Name to search: ";
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < contactCount; i++) {
        // Checking for a match (Case-sensitive exact match)
        if (contacts[i].name == searchName) {
            if (!found) {
                cout << "\nRecord(s) Found:\n";
                found = true;
            }
            cout << "----------------------------------------\n";
            cout << "ID    : " << contacts[i].id << "\n";
            cout << "Name  : " << contacts[i].name << "\n";
            cout << "Phone : " << contacts[i].phone << "\n";
        }
    }

    if (!found) {
        cout << "\nContact with Name \"" << searchName << "\" not found.\n";
    } else {
        cout << "----------------------------------------\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\n=== CONTACT MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by Name\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                cout << "\nExiting Contact System. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}