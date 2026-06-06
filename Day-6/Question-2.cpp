//Q. 2 : Program to convert binary to decimal

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dec=0,i=0,rem;
    long long bin;
    bool sign=false;
    cout << "Enter binary number to convert into decimal:  ";
    cin >> bin;
    //Exception handling
    if (bin<0){
        bin*=(-1);
        sign=true;
    }
    //Converting binary to decimal
    while (bin>0){
        rem=bin%10;
        dec+=rem*pow(2,i);
        bin/=10;
        i++;
    }
    //Multiplying by -1 is the sign was negative
    if (sign){
        dec*=(-1);
        cout << "Decimal number: " << dec;
        return 0;
    }
    cout << "Decimal number: " << dec;
    return 0;
}