//Q. 3 : Program to find the longest word
#include <iostream>
#include <cstring>
using namespace std;
// Function to find the longest word
void longestword(char* sentence, char* result) {
    int n = strlen(sentence);
    int maxLength = 0;
    char* maxStartPtr = sentence;
    
    int currentLength = 0;
    char* currentStartPtr = sentence;

    for (int i = 0; i <= n; i++) {
        // Check for space, tab, or the null terminator '\0'
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\0') {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartPtr = currentStartPtr;
            }
            // Reset for the next word
            currentLength = 0;
            currentStartPtr = &sentence[i + 1];
        } else {
            currentLength++;
        }
    }

    // Copy the longest word into the result buffer
    strncpy(result, maxStartPtr, maxLength);
    result[maxLength] = '\0'; // Manually append the null terminator
}

int main() {
    // Allocate a large buffer for user input sentence
    char sentence[1000];
    // Buffer to hold the longest word output
    char lword[1000]; 

    cout << "Enter a sentence: ";
    
    // Reads up to 999 characters or until Enter is pressed, keeping spaces intact
    cin.getline(sentence, 1000);
    
    // Process the C-string input
    longestword(sentence, lword);
    
    cout << "\nLongest Word: \"" << lword << "\"\n";
    cout << "Length: " << strlen(lword) << " characters\n";

    return 0;
}
