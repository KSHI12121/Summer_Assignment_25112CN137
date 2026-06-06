//Q. 4 : Program to calculate x^n with pow() function

#include <iostream>
using namespace std;

int main() {
    int base,exp,i,mult;
    cout << "Enter base value: ";
    cin >> base;
    cout << "Enter exponent value: ";
    cin >> exp;
    if (exp<1){
        cout << "Invalid exponent!";
        return 0;
    }
    mult=base;
    for (i=1;i<exp;i++){
        mult*=base;
    }
    cout << "Value of base raised to exponent is: " << mult;
    return 0;
}