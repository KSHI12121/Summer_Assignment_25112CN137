//Q. 3 : Program to check armstrong number

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,count=0,rem,i,arm=0;
    cout << "Enter number to check whether it is Armstrong number or not: ";
    cin >> n;
    //Exception handling
    if (n<0){
        cout << "The entered number is not an Armstrong number";
        return 0;
    }
    int n1=n;
    //Counting the number of digits
    while (n1>0){
        count++;
        n1/=10;
    }
    n1=n;
    //Calculating sum of digits raised to exponents
    for(i=0;i<=count;i++){
        rem=n1%10;
        arm+=pow(rem,count);
        n1/=10;
    }
    //Checking whether entered number is Armstrong number or not
    if (n==arm){
        cout << "The entered number is an Armstrong number.";
    }
    else {
        cout << "The entered number is not an Armstrong number.";
    }
    return 0;
}