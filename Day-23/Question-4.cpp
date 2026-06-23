//Q. $ : Program to find maximum occuring character
#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() {
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);
    unordered_map<char, int> mp;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ')
        continue; 
        mp[s[i]]++;
    }
    char cmax = ' ';
    int countmax = 0;
    for (const auto& pair : mp) {
        if (pair.second > countmax) {
            countmax = pair.second; 
            cmax = pair.first; 
        }
    }
    if (countmax > 0){
        cout << "The maximum occurring character is '" << cmax << "' with a count of " << countmax << " times." << endl;
    } 
    else {
        cout << "The string is empty." << endl;
    }
    return 0;
}