//Q. 1 : Program to check whether a number is prime or not

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,i,fct=0;
    cout << "Enter number to check whether it is prime or not: ";
    cin >> n;
    if (n<1){
        cout << "Invalid number.";
        return 0;
    }
    if (n==1){
        cout << "1 is neither prime nor composite.";
        return 0;
    }
    for (i=2;i<=sqrt(n);i++){
        if (n%i==0){
            fct++;
        }
    }
    if (fct>0){
        cout << "The number " << n << " is not a prime number.";
    }
    else{
        cout << "The number " << n << " is a prime number.";
    }
    return 0;
}