//Q. 3 : Program to count set bits in an integer

#include <iostream>
#include <cmath>
using namespace std;
//Function to convert decimal to binary
int convertbinary(int dec){
    int rem,i=1;
    long long bin=0;
    while (dec>0){
        rem=dec%2;
        bin=bin+rem*i;
        dec/=2;
        i*=10;
    }
    return bin;
}

int main() {
    int dec,rem,count=0;
    cout << "Enter number to count set bits: ";
    cin >> dec;
    //Exception handling
    if (dec<0) {
        dec*=(-1);
    }
    //Converting decimal input to binary
    long long bin=convertbinary(dec);
    //Caluclating no. of 1s in the binary number
    while (bin>0){
        rem=bin%10;
        if (rem==1){
            count++;
        }
        bin/=10;
    }
    cout << "The number of set bits is: " << count;
    return 0;
}