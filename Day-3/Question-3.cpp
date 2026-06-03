//Q. 3 : Program to find GCD of two numbers

#include <iostream>
using namespace std;

int main() {
    int n1,n2,i,min,gcd;
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
    cout << "GCD of the entered numbers is: " << gcd;
    return 0;
}