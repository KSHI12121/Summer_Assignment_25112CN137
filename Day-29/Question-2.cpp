//Q. 2 : Program to create menu-driven array operations system
#include <iostream>

using namespace std;

// 1. Function to display the array elements
void displayArray(const int arr[], int size) {
    if (size == 0) {
        cout << "\nArray is empty.\n";
        return;
    }
    cout << "\nArray elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nCurrent Size: " << size << "\n";
}

// 2. Function to insert an element at a specific position
void insertElement(int arr[], int &size, int capacity, int element, int position) {
    // Check for valid position constraints
    if (position < 1 || position > size + 1) {
        cout << "\nInvalid position!\n";
        return;
    }

    int index = position - 1; 

    // Shift elements to the right to make space
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element and update size
    arr[index] = element;
    size++;
    cout << "\nElement inserted successfully!\n";
}

// 3. Function to delete an element from a specific position
void deleteElement(int arr[], int &size, int position) {

    if (position < 1 || position > size) {
        cout << "\nInvalid position!\n";
        return;
    }

    int index = position - 1; // Convert 1-based position to 0-based index

    // Shift elements to the left to plug the gap
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;
    cout << "\nElement deleted successfully!\n";
}

// 4. Function to search for an element (Linear Search)
int searchElement(const int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    const int CAPACITY = 100; // Maximum capacity of the array
    int arr[CAPACITY];
    int size = 0; // Current number of elements in the array
    int choice, element, position, index;

    cout << "Enter the initial number of elements (Max " << CAPACITY << "): ";
    cin >> size;

    while (size < 0 || size > CAPACITY) {
        cout << "Invalid size! Please enter a number between 0 and " << CAPACITY << ": ";
        cin >> size;
    }

    if (size > 0) {
        cout << "Enter " << size << " integers:\n";
        for (int i = 0; i < size; i++) {
            cout << "Element [" << i << "]: ";
            cin >> arr[i];
        }
    }
    
    do {
        cout << "\n===== ARRAY OPERATIONS SYSTEM =====\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "===================================\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;

            case 2:
                if (size >= CAPACITY) {
                    cout << "\nError: Array is full (Overflow)!\n";
                    break;
                }
                cout << "Enter element to insert: ";
                cin >> element;
                cout << "Enter position (1 to " << size + 1 << "): ";
                cin >> position;
                
                insertElement(arr, size, CAPACITY, element, position);
                break;

            case 3:
                if (size == 0) {
                    cout << "\nError: Array is empty (Underflow)!\n";
                    break;
                }
                cout << "Enter position to delete (1 to " << size << "): ";
                cin >> position;

                deleteElement(arr, size, position);
                break;

            case 4:
                if (size == 0) {
                    cout << "\nArray is empty. Nothing to search.\n";
                    break;
                }
                cout << "Enter element to search for: ";
                cin >> element;
                
                index = searchElement(arr, size, element);
                if (index != -1) {
                    cout << "\nElement " << element << " found at index " << index << " (Position " << index + 1 << ").\n";
                } else {
                    cout << "\nElement " << element << " not found in the array.\n";
                }
                break;

            case 5:
                cout << "\nExiting System. Goodbye!\n";
                break;

            default:
                cout << "\nInvalid choice! Please select a valid option.\n";
        }

        cout << "\n-----------------------------------\n";

    } while (choice != 5);

    return 0;
}