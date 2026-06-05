//Q. 2 : Program to check strong number

#include <iostream>
using namespace std;
//Function to calculate factorial of a number
int factorial (int n){
    int i,fact=1;
    for (i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main() {
    int n,sum=0,rem;
    cout << "Enter number to check whether it is strong number or not: ";
    cin >> n;
    //Exception handling
    if (n<=0){
        cout << "It is not a strong number.";
    }
    //Assigning value of original variable to new variable
    int n1=n;
    //Individually calculating the factorial of each digit and adding it to sum
    while(n1>0){
        rem=n1%10;
        sum+=factorial(rem);
        n1/=10;
    }
    //Comparing the values
    if (n==sum){
        cout << "It is a strong number.";
    }
    else {
        cout << "It is not a strong number.";
    }
    return 0;
}