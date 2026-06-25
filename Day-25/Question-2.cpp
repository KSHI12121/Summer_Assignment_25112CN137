//Q. 2 : Program to find common characters between two strings
#include <iostream>
#include <cstring>   
#include <map>       

using namespace std;

void findCommonCharacters( char* str1,  char* str2) {

    map<char, int> freq1;
    map<char, int> freq2;

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    for (size_t i = 0; i < len1; ++i) {
        freq1[str1[i]]++;
    }

    for (size_t i = 0; i < len2; ++i) {
        freq2[str2[i]]++;
    }

    cout << "Common characters: ";
    bool found = false;

    for (const auto& pair : freq1) {
        char ch = pair.first;
        int count1 = pair.second;

        if (freq2.find(ch) != freq2.end()) {
            int count2 = freq2[ch];
            int commonCount = (count1 < count2) ? count1 : count2;

            for (int j = 0; j < commonCount; j++) {
                cout << ch << " ";
            }
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    char string1[100];
    char string2[100];

    // std:: prefix removed from cout and cin
    cout << "Enter the first string: ";
    cin.getline(string1, 100);

    cout << "Enter the second string: ";
    cin.getline(string2, 100);

    cout << "String 1: " << string1 << endl;
    cout << "String 2: " << string2 << endl;

    findCommonCharacters(string1, string2);

    return 0;
}