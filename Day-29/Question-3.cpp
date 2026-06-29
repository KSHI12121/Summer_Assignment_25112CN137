//Q. 3 : Program to create menu-driven string operations system
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int CAPACITY = 200;
    char str[CAPACITY];
    char tempStr[CAPACITY];
    int choice;

    cout << "===== INITIALIZE C-STRING =====\n";
    cout << "Enter the initial string (Max " << CAPACITY - 1 << " chars): ";
    cin.getline(str, CAPACITY); 
    // ------------------------------

    do {
        cout << "\n===== C-STRING OPERATIONS SYSTEM =====\n";
        cout << "Current String: \"" << str << "\"\n";
        cout << "--------------------------------------\n";
        cout << "1. Display String & Length\n";
        cout << "2. Append (Concatenate) Text\n";
        cout << "3. Reverse the String (Manual)\n";
        cout << "4. Search for a Substring\n";
        cout << "5. Exit\n";
        cout << "======================================\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore(); 

        int currentLen = strlen(str);

        switch (choice) {
            case 1:
                cout << "\nString: " << str << "\n";
                cout << "Length: " << currentLen << " characters.\n";
                break;

            case 2:
                cout << "Enter text to append: ";
                cin.getline(tempStr, CAPACITY);
                
                // Check if combined strings fit inside the buffer bounds
                if (currentLen + strlen(tempStr) < CAPACITY) {
                    strcat(str, tempStr); // Safe concatenation
                    cout << "\nText appended successfully!\n";
                } else {
                    cout << "\nError: Buffer overflow prevented! Text too long.\n";
                }
                break;

            case 3: {
                // Manual pointer-swapping algorithm to reverse character array
                int start = 0;
                int end = currentLen - 1;
                while (start < end) {
                    char temp = str[start];
                    str[start] = str[end];
                    str[end] = temp;
                    start++;
                    end--;
                }
                cout << "\nString reversed successfully!\n";
                break;
            }

            case 4: {
                cout << "Enter substring to search for: ";
                cin.getline(tempStr, CAPACITY);
                
                // strstr returns a pointer to the first occurrence or NULL
                char* matchPointer = strstr(str, tempStr);
                
                if (matchPointer != NULL) {
                    // Calculating index via pointer subtraction
                    int index = matchPointer - str;
                    cout << "\nSubstring found starting at index: " << index << "\n";
                } else {
                    cout << "\nSubstring NOT found.\n";
                }
                break;
            }

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