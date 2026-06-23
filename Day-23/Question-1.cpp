//Q. 1 : Program to print first non-repeating character
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char st[100];
    cout << "Enter a string: ";
    cin.getline(st,100);
    cout << "First non-repeating character is: " << st[0] << endl;
    return 0;
}