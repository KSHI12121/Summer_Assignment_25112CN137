//Q. 1 : Program for recursive factorial

#include <iostream>
using namespace std;
//Recursive function to calculate factorial
int fact(int n){
    if (n>1){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}

int main() {
    int n,fct;
    cout << "Enter number to calculate factorial: ";
    cin >> n;
    if (n<0){
        cout << "Factorial doesn't exist!";
        return 0;
    }
    //Calling the function
    fct=fact(n);
    cout << "Factorial of the entered number is: " << fct;
    return 0;
}