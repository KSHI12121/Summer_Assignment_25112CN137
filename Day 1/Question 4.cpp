//Q.4 : Program to count digits of a number

#include <iostream>
using namespace std;

int main() {
    int count=0,n,i;
    cout << "Enter number to count digits: ";
    cin >> n;
    while (n>0){
        count++;
        n/=10;
    }
    cout << "The number of digits in entered number are: " << count;
    return 0;
}