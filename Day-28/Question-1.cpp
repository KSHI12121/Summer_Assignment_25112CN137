//Q. 1 : Program to create a library management system
#include <iostream>
#include <string>

using namespace std;
const int MAX_BOOKS = 100;

// Structure to group book details
struct Book {
    int id;
    string title;
    string author;
    bool isIssued; 
};

Book books[MAX_BOOKS];
int bookCount = 0;

// Function to add a book
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        cout << "\nError: System storage is full!\n";
        return;
    }

    int id;
    cout << "\nEnter Book ID: ";
    cin >> id;

    // Check if ID already exists
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            cout << "\nError: Book with ID " << id << " already exists!\n";
            return;
        }
    }
    books[bookCount].id = id;
    books[bookCount].isIssued = false; // New books are available by default
    cin.ignore(); // Clear input buffer

    cout << "Enter Book Title: ";
    getline(cin, books[bookCount].title);

    cout << "Enter Author Name: ";
    getline(cin, books[bookCount].author);

    bookCount++;
    cout << "\nBook added successfully!\n";
}
// Function to display all books
void displayBooks() {
    if (bookCount == 0) {
        cout << "\nNo book records found.\n";
        return;
    }
    cout << "\n=================== BOOK LIST ===================\n";
    for (int i = 0; i < bookCount; i++) {
        cout << "ID: " << books[i].id 
             << " | Title: " << books[i].title 
             << " | Author: " << books[i].author 
             << " | Status: " << (books[i].isIssued ? "Issued" : "Available") << "\n";
    }
    cout << "=================================================\n";
}

// Function to search for a book by ID
void searchBook() {
    if (bookCount == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }
    int searchId;
    cout << "\nEnter Book ID to search: ";
    cin >> searchId;

    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == searchId) {
            cout << "\nRecord Found!\n";
            cout << "ID: " << books[i].id << "\n";
            cout << "Title: " << books[i].title << "\n";
            cout << "Author: " << books[i].author << "\n";
            cout << "Status: " << (books[i].isIssued ? "Issued" : "Available") << "\n";
            return;
        }
    }
    cout << "\nBook with ID " << searchId << " not found.\n";
}
// Function to issue a book
void issueBook() {
    if (bookCount == 0) {
        cout << "\nNo records available.\n";
        return;
    }

    int searchId;
    cout << "\nEnter Book ID to issue: ";
    cin >> searchId;

    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == searchId) {
            if (books[i].isIssued) {
                cout << "\nError: This book is already issued to someone else!\n";
            } else {
                books[i].isIssued = true;
                cout << "\nBook issued successfully!\n";
            }
            return;
        }
    }
    cout << "\nBook with ID " << searchId << " not found.\n";
}
// Function to return a book
void returnBook() {
    if (bookCount == 0) {
        cout << "\nNo records available.\n";
        return;
    }

    int searchId;
    cout << "\nEnter Book ID to return: ";
    cin >> searchId;

    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == searchId) {
            if (!books[i].isIssued) {
                cout << "\nError: This book was not issued.\n";
            } else {
                books[i].isIssued = false;
                cout << "\nBook returned successfully!\n";
            }
            return;
        }
    }
    cout << "\nBook with ID " << searchId << " not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n=== LIBRARY MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                cout << "\nExiting program. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}