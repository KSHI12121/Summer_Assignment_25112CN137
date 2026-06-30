// Q. 4 : Program to develop complete mini-project using arrays, strings and functions
// PERSONAL EXPENSE AND BUDGET LOGGER SYSTEM
#include <iostream>
#include <string>

using namespace std;
struct Expense {
    string date;
    string cat; 
    string text; 
    float amt;   
};

int main() {
    Expense list[200]; 
    int count = 0;     
    float budget = 0;  
    float total = 0;
    int choice;

    cout << "=== MY BUDGET LOGGER ===" << endl;
    cout << "Enter your monthly budget (Rs.): ";
    cin >> budget;
    do {
        // Show basic status update
        cout << "\n-----------------------" << endl;
        cout << "Budget: Rs. " << budget << endl;
        cout << "Spent:  Rs. " << total << endl;
        cout << "Left:   Rs. " << (budget - total) << endl;
        cout << "-----------------------" << endl;

        cout << "1. Add Expense" << endl;
        cout << "2. Show All Expenses" << endl;
        cout << "3. Filter by Category" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        // Fix if user accidentally inputs a character instead of a number
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid entry!" << endl;
            continue;
        }

        // OPTION 1: ADD EXPENSE
        if (choice == 1) {
            if (count >= 200) {
                cout << "List is full!" << endl;
            } else {
                Expense e;
                cout << "Enter Date (DD/MM): ";
                cin >> e.date;

                cin.ignore(); // Clear buffer before reading string lines
                cout << "Enter Category (Food, Travel, etc.): ";
                getline(cin, e.cat);

                cout << "Enter Description: ";
                getline(cin, e.text);

                cout << "Enter Amount (Rs.): ";
                cin >> e.amt;

                list[count] = e; // Save to array
                total = total + e.amt; // Add to total spent
                count++; // Move to next slot
                cout << "Logged successfully!" << endl;
            }
        }
        
        // OPTION 2: SHOW ALL EXPENSES
        else if (choice == 2) {
            if (count == 0) {
                cout << "No expenses recorded yet." << endl;
            } else {
                cout << "\n--- ALL EXPENSES ---" << endl;
                for (int i = 0; i < count; i++) {
                    cout << list[i].date << " | " 
                         << list[i].cat << " | " 
                         << list[i].text << " | Rs. " 
                         << list[i].amt << endl;
                }
                
                if (total > budget) {
                    cout << "\nWARNING: You are OVER budget by Rs. " << (total - budget) << "!" << endl;
                }
            }
        } 

        // OPTION 3: FILTER BY CATEGORY
        else if (choice == 3) {
            if (count == 0) {
                cout << "No data to filter." << endl;
            } else {
                cin.ignore();
                string search;
                cout << "Enter category to search: ";
                getline(cin, search);

                float catTotal = 0;
                bool found = false;

                cout << "\n--- Results for " << search << " ---" << endl;
                for (int i = 0; i < count; i++) {
                    if (list[i].cat == search) {
                        cout << list[i].date << " | " 
                             << list[i].text << " | Rs. " 
                             << list[i].amt << endl;
                        
                        catTotal = catTotal + list[i].amt;
                        found = true;
                    }
                }

                if (!found) {
                    cout << "No items found in this category." << endl;
                } else {
                    cout << "Total spent on " << search << ": Rs. " << catTotal << endl;
                }
            }
        }

    } while (choice != 4);

    cout << "App closed. Goodbye!" << endl;
    return 0;
}