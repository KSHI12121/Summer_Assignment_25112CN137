//Q. 2 : Program to reverse a string
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char n[100];
    cout << "Enter a string: ";
    cin.getline(n,100);
    //Finding length of string
    int length=strlen(n);
    //Running loop from n-1 to 0 and printing corresponding character
    cout << "Reverse of the entered string is: \n";
    for (int i=length-1;i>=0;i--){
        cout << n[i];
    }
    cout << endl;
    return 0;
}