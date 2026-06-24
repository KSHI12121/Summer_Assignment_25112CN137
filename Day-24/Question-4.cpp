//Q. 4 : Program to remove duplicate characters
#include <iostream>
#include <unordered_map>
#include <cstring> 
using namespace std;

void removedup(char* str) {
    unordered_map<char, bool> seen;
    int index = 0; 
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = str[i];
        // If the character has not been seen yet
        if (!seen[ch]) {
            seen[ch] = true;     // Mark it as seen
            str[index++] = ch;   // Overwrite in-place
        }
    }   
    // Null-terminate the modified string
    str[index] = '\0';
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    // Modify the string 
    removedup(input);

    cout << "String after removing duplicates: " << input << endl;

    return 0;
}
