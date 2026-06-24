//Q. 1 : Program to check string rotation
#include <iostream>
#include <string>
using namespace std;

// Function to check if str2 is a rotation of str1
bool areRotations(const string& str1, const string& str2) {
    // If lengths are not equal, they cannot be rotations of each other
    if (str1.length() != str2.length()) {
        return false;
    }
    // Concatenate str1 with itself
    string temp = str1 + str1;
    // Check if str2 is a substring of the concatenated string
    // temp.find() returns string::npos if the substring is not found
    return (temp.find(str2) != string::npos);
}

int main() {
    string str1;
    string str2;
    cout << "Enter first string: ";
    getline(cin,str1);
    cout << "Enter second string: ";
    getline(cin,str2);
    
    if (areRotations(str1, str2)) {
        cout << "Strings are rotations of each other.\n";
    } else {
        cout << "Strings are not rotations of each other.\n";
    }
    return 0;
}
