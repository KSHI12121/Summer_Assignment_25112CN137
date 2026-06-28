//Q. 3 : Program to create a ticket booking system
#include <iostream>
#include <string>

using namespace std;
const int MAX_SHOWS = 50;

// Structure to group show and ticket details
struct Show {
    int id;
    string title;
    int totalSeats;
    int availableSeats;
    double ticketPrice;
};

Show shows[MAX_SHOWS];
int showCount = 0;

// Function to add a new show/movie to the system
void addShow() {
    if (showCount >= MAX_SHOWS) {
        cout << "\nError: System storage is full! Cannot add more shows.\n";
        return;
    }

    int id;
    cout << "\nEnter Show ID: ";
    cin >> id;

    // Check if ID already exists
    for (int i = 0; i < showCount; i++) {
        if (shows[i].id == id) {
            cout << "\nError: Show with ID " << id << " already exists!\n";
            return;
        }
    }
    shows[showCount].id = id;
    cin.ignore(); // Clear input buffer

    cout << "Enter Movie/Show Title: ";
    getline(cin, shows[showCount].title);

    cout << "Enter Total Seat Capacity: ";
    cin >> shows[showCount].totalSeats;
    shows[showCount].availableSeats = shows[showCount].totalSeats; // Initially all seats are free

    cout << "Enter Ticket Price: $";
    cin >> shows[showCount].ticketPrice;

    showCount++;
    cout << "\nShow added successfully!\n";
}
// Function to display all available shows and their seat status
void displayShows() {
    if (showCount == 0) {
        cout << "\nNo shows available at the moment.\n";
        return;
    }

    cout << "\n======================= CURRENT AVAILABLE SHOWS =======================\n";
    for (int i = 0; i < showCount; i++) {
        cout << "ID: " << shows[i].id 
             << " | Title: " << shows[i].title 
             << " | Price: $" << shows[i].ticketPrice 
             << " | Available Seats: " << shows[i].availableSeats << "/" << shows[i].totalSeats << "\n";
    }
    cout << "=======================================================================\n";
}
// Function to book tickets for a specific show
void bookTickets() {
    if (showCount == 0) {
        cout << "\nNo shows available to book.\n";
        return;
    }
    int id;
    cout << "\nEnter Show ID to Book Tickets: ";
    cin >> id;

    for (int i = 0; i < showCount; i++) {
        if (shows[i].id == id) {
            int ticketsToBook;
            cout << "\nShow Found: " << shows[i].title << "\n";
            cout << "Ticket Price: $" << shows[i].ticketPrice << "\n";
            cout << "Available Seats: " << shows[i].availableSeats << "\n";
            
            cout << "Enter number of tickets to book: ";
            cin >> ticketsToBook;

            if (ticketsToBook <= 0) {
                cout << "\nError: Invalid number of tickets!\n";
            } else if (ticketsToBook > shows[i].availableSeats) {
                cout << "\nError: Not enough seats available! Only " << shows[i].availableSeats << " remaining.\n";
            } else {
                // Calculate total bill
                double totalCost = ticketsToBook * shows[i].ticketPrice;
                
                // Update system state
                shows[i].availableSeats -= ticketsToBook;
                
                cout << "\n================= BOOKING CONFIRMED =================\n";
                cout << "Show Title : " << shows[i].title << "\n";
                cout << "Tickets    : " << ticketsToBook << "\n";
                cout << "Total Bill : $" << totalCost << "\n";
                cout << "=====================================================\n";
            }
            return;
        }
    }
    cout << "\nShow with ID " << id << " not found.\n";
}
// Function to cancel booked tickets
void cancelTickets() {
    if (showCount == 0) {
        cout << "\nNo records available.\n";
        return;
    }
    int id;
    cout << "\nEnter Show ID to Cancel Tickets: ";
    cin >> id;

    for (int i = 0; i < showCount; i++) {
        if (shows[i].id == id) {
            int ticketsToCancel;
            cout << "\nShow Found: " << shows[i].title << "\n";
            
            cout << "Enter number of tickets to cancel: ";
            cin >> ticketsToCancel;

            // Maximum amount you can cancel equals whatever is currently missing from total capacity
            int bookedSeats = shows[i].totalSeats - shows[i].availableSeats;

            if (ticketsToCancel <= 0) {
                cout << "\nError: Invalid number of tickets!\n";
            } else if (ticketsToCancel > bookedSeats) {
                cout << "\nError: You cannot cancel more tickets than are currently booked (" << bookedSeats << ")!\n";
            } else {
                // Update system state
                shows[i].availableSeats += ticketsToCancel;
                cout << "\n" << ticketsToCancel << " ticket(s) canceled successfully!\n";
                cout << "Refund Amount processed: $" << (ticketsToCancel * shows[i].ticketPrice) << "\n";
            }
            return;
        }
    }
    cout << "\nShow with ID " << id << " not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n=== TICKET BOOKING SYSTEM ===\n";
        cout << "1. Add New Show/Movie\n";
        cout << "2. Display All Shows\n";
        cout << "3. Book Tickets\n";
        cout << "4. Cancel Tickets\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addShow();
                break;
            case 2:
                displayShows();
                break;
            case 3:
                bookTickets();
                break;
            case 4:
                cancelTickets();
                break;
            case 5:
                cout << "\nExiting System. Thank you!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}