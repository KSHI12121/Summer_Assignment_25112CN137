//Q . 3 : Program to sort names alphabetically
#include <iostream>
#include <cstring>   
#include <map>       

using namespace std;

int main() {

    map<string, int> nameMap;
    int n;
    cout << "Enter the number of names you want to sort: ";
    cin >> n;

    cin.ignore();
    char tempName[50];

    cout << "Enter " << n << " names (one per line):\n";
    for (int i = 0; i < n; i++) {
        cout << "Name " << i + 1 << ": ";
        cin.getline(tempName, 50);

        nameMap[string(tempName)]++;
    }

    cout << "Names in alphabetical order:\n";

    for (const auto& pair : nameMap) {
        string name = pair.first;
        int frequency = pair.second;
        for (int j = 0; j < frequency; ++j) {
            cout << name << endl;
        }
    }
    return 0;
}