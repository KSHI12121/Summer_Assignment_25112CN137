//Q. 1 : Program to find string length without strlen()
#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    int length=0;
    //Taking string as input
    cout << "Enter a string: ";
    getline(cin,n);
    //Using while loop to count no. of characters before terminating character
    while (n[length]!='\0'){
        length++;
    }
    cout << "The length of the entered string is: " << length;
    cout << endl;
    return 0;
}