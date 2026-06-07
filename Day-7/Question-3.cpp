//Q. 3 : Program for recursive sum of digits
#include <iostream>
using namespace std;
//Recursive function to calculate sum of digits
int sumofdigits(int n){
    if (n==0){
        return 0;
    }
    else{
        return n%10+sumofdigits(n/10);
    }
}

int main() {
    int n,sum;
    cout << "Enter number to find sum of digits: ";
    cin >> n;
    //Exception handling
    if (n<0){
        n*=-1;
    }
    // Function calling and output statement
    cout << "Sum of digits of entered number is: " << sumofdigits(n);
    return 0;
}