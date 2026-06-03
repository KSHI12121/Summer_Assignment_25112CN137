//Q. 4 : Program to find LCM of two numbers

#include <iostream>
using namespace std;

int main() {
    int n1,n2,i,min,lcm,gcd;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    //Checking for negative numbers
    if (n1<0 || n2<0){
        cout << "Invalid numbers.";
        return 0;
    }
    //Finding the minimum of the entered numbers
    if (n1<=n2){
        min=n1;
    }
    else{
        min=n2;
    }
    //Checking for GCD by downward loop from min value to 1
    for(i=min;i>=1;i--){
        if (n1%i==0 && n2%i==0){
            gcd=i;
            break;
        }
    }
    lcm=n1*n2/gcd;
    cout << "LCM of the entered numbers is: " << lcm;
    return 0;
}