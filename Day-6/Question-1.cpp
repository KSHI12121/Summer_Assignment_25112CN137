//Q. 1 : Program to convert decimal to binary

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dec,i=1,rem;
    long long bin=0;
    bool sign=false;
    cout << "Enter decimal number to convert into binary:  ";
    cin >> dec;
    //Exception handling
    if (dec<0){
        dec*=(-1);
        sign=true;
    }
    //Converting decimal to binary
    while (dec>0){
        rem=dec%2;
        bin=bin+rem*i;
        dec/=2;
        i*=10;
    }
    if (sign){
        bin*=(-1);
        cout << "Binary number: " << bin;
        return 0;
    }
    cout << "Binary number: " << bin;
    return 0;
}