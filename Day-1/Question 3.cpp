//Q.3 : Program to print factorial of a number

#include <iostream>
using namespace std;

int main() {
    int n,fact,i;
    fact=1;
    cout << "Enter number to find factorial: ";
    cin >> n;
    if(n<0){
        cout << "Invalid number";
    }
    else if (n==0) {
        fact=1;
    }
    else{
        for (i=2;i<=n;i++){
            fact*=i;
        }
    }
    cout << "The factorial of the entered number is: " << fact;
    return 0;
}
