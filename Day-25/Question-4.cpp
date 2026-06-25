//Q. 4 : Program to sort words by length
#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of words: ";
    cin >> n;

    map<int, char[1000]> lengthMap;
    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++) {
        char currentWord[100];
        cin >> currentWord;

        int len = strlen(currentWord);

        // If the length already exists in the map, append a space and the new word
        if (lengthMap.find(len) != lengthMap.end()) {
            strcat(lengthMap[len], " ");
            strcat(lengthMap[len], currentWord);
        } else {
            // Otherwise, initialize the character array for this length
            strcpy(lengthMap[len], currentWord);
        }
    }

    cout << "\nWords sorted by length:\n";
    for (const auto& pair : lengthMap) {
        cout << pair.second << " ";
    }
    cout << endl;

    return 0;
}