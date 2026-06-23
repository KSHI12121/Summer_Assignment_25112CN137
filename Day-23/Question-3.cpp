//Q. 3 : Program to check anagram strings
#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() {
    char s1[100],s2[100],i;
    cout << "Enter a string: ";
    cin.getline(s1,100);
    cout << "Enter another string: ";
    cin.getline(s2,100);
    unordered_map<char, int>mp;
    for (int i=0;i<strlen(s1);i++){
        mp[s1[i]]++;
    }
    for (int i=0;i<strlen(s2);i++){
        mp[s2[i]]--;
    }
    bool anagram=true;
    for (auto& pair : mp) {
        if (pair.second != 0) { 
            anagram = false;
            break;
        }
    }
    if (anagram){
        cout << "The strings are anagrams!" << endl;
        return 0;
    }
    cout << "The strings are not anagrams!" << endl;
    return 0;
}