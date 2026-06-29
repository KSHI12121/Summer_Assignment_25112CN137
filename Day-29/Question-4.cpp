//Q. 4 : Program to create inventory management system
#include <iostream>
#include <map>
#include <string>

using namespace std;

struct Product {
    string name;
    int quantity;
    double price;
};

void printRupeePrice(double price) {
    long rupees = (long)price;
    long paise = (long)((price - rupees) * 100 + 0.5);
    
    if (paise >= 100) {
        rupees += 1;
        paise -= 100;
    }

    cout << "Rs. " << rupees << ".";
    if (paise < 10) {
        cout << "0";
    }
    cout << paise;
}

int main() {
    map<int, Product> inventory;
    int choice, initialItems;
    cout << "===== INITIALIZE INVENTORY =====\n";
    cout << "Enter the number of initial products to add: ";
    cin >> initialItems;

    for (int i = 0; i < initialItems; i++) {
        int id;
        Product p;
        cout << "\n--- Product " << (i + 1) << " ---\n";
        cout << "Enter Product ID (Integer): ";
        cin >> id;

        while (inventory.find(id) != inventory.end()) {
            cout << "Error: This Product ID already exists. Enter a unique ID: ";
            cin >> id;
        }
        
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, p.name);
        cout << "Enter Quantity: ";
        cin >> p.quantity;
        cout << "Enter Price (Rupees): ";
        cin >> p.price;

        inventory[id] = p;
    }
    cout << "\nInitialization complete! Loading menu system...\n";
    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add / Update Product\n";
        cout << "2. Search Product by ID\n";
        cout << "3. Remove Product\n";
        cout << "4. Display Full Inventory\n";
        cout << "5. Exit\n";
        cout << "=======================================\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                Product p;
                cout << "\nEnter Product ID (Integer): ";
                cin >> id;
                cin.ignore(); 
                
                if (inventory.find(id) != inventory.end()) {
                    cout << "Product exists! Overwriting/Updating records.\n";
                } else {
                    cout << "New product detected! Creating record.\n";
                }

                cout << "Enter Product Name: ";
                getline(cin, p.name);
                cout << "Enter Quantity: ";
                cin >> p.quantity;
                cout << "Enter Price (Rupees): ";
                cin >> p.price;

                inventory[id] = p; 
                cout << "\nProduct ID " << id << " saved successfully!\n";
                break;
            }

            case 2: {
                int id;
                cout << "\nEnter Product ID to Search: ";
                cin >> id;

                auto it = inventory.find(id);
                if (it != inventory.end()) {
                    cout << "\n--- Product Details ---\n";
                    cout << "ID: " << it->first << "\n";
                    cout << "Name: " << it->second.name << "\n";
                    cout << "Stock Quantity: " << it->second.quantity << "\n";
                    cout << "Price: ";
                    printRupeePrice(it->second.price);
                    cout << "\n";
                } else {
                    cout << "\nError: Product ID " << id << " not found!\n";
                }
                break;
            }

            case 3: {
                int id;
                cout << "\nEnter Product ID to Remove: ";
                cin >> id;

                if (inventory.erase(id)) {
                    cout << "\nProduct ID " << id << " successfully deleted.\n";
                } else {
                    cout << "\nError: Product ID " << id << " not found!\n";
                }
                break;
            }

            case 4: {
                if (inventory.empty()) {
                    cout << "\nInventory is currently empty.\n";
                    break;
                }

                cout << "\n================ CURRENT INVENTORY =================\n";
                cout << "ID\t\tName\t\t\tQuantity\tPrice\n";
                cout << "-----------------------------------------------------\n";

                for (const auto& pair : inventory) {
                    cout << pair.first << "\t\t";
                    
                    cout << pair.second.name;
                    if (pair.second.name.length() < 8) {
                        cout << "\t\t\t";
                    } else if (pair.second.name.length() < 16) {
                        cout << "\t\t";
                    } else {
                        cout << "\t";
                    }

                    cout << pair.second.quantity << "\t\t";
                    printRupeePrice(pair.second.price);
                    cout << "\n";
                }
                cout << "=====================================================\n";
                break;
            }

            case 5:
                cout << "\nExiting Inventory System. Goodbye!\n";
                break;

            default:
                cout << "\nInvalid choice! Please select an option between 1 and 5.\n";
        }

        cout << "\n-----------------------------------\n";

    } while (choice != 5);

    return 0;
}