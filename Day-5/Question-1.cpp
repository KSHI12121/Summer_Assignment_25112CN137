//Q. 1 : Program to check perfect number

#include <iostream>
using namespace std;

int main() {
    int n,i,fact,sum=0;
    cout << "Enter number to check whether it is perfect or not: ";
    cin >> n;
    //Exception handling
    if (n<=0){
        cout << "Entered number is not a perfect number.";
        return 0;
    }
    //Summing the factors of the entered number
    for (i=1;i<=n/2;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    //Checking if the sum is equal to entered number or not
    if (n==sum){
        cout << "Entered number is a perfect number: ";
    }
    else {
        cout << "Entered number is not a perfect number.";
    }
    return 0;
}