//Q. 2 : Program for recursive Fibonacci

#include <iostream>
using namespace std;
//Recursive function to calculate term of fibonacci series
int fibo(int n){
    if (n<=1){
        return n;
    }
    else {
        return fibo(n-1)+fibo(n-2);
    }
}

int main() {
    int n,i;
    cout << "Enter number of terms: ";
    cin >> n;
    //Exception handling
    if (n<=0){
        cout << "Invalid number of terms!";
        return 0;
    }
    cout << "Fibonacci series: \n";
    //Main loop
    for (i=0;i<n;i++){
        cout << fibo(i) << '\t';
    }
    return 0;
}