//Q. 3 : Program to print factors of a number

#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout << "Enter number to print its factors: ";
    cin >> n;
    //Exception handling
    if (n<0){
        cout << "Invalid number!";
        return 0;
    }
    cout << "The factors of the entered number are: \n";
    //Checking for numbers that perfectly divide entered number from 1 till n/2
    for (i=1;i<=n/2;i++){
        if (n%i==0){
            cout << i << '\t';
        }
    }
    //Printing the same number as it is its own factor
    cout << n;
    return 0;
}