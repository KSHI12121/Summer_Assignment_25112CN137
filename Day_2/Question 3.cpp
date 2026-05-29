//Q. 3 : Program to find product of digits

#include <iostream>
using namespace std;

int main() {
    int n,prod=1,rem,i;
    cout << "Enter number to find product of digits: ";
    cin >> n;
    if (n<0){
        n*=(-1);
    }
    while (n>0){
        rem=n%10;
        prod*=rem;
        n/=10;
    }
    cout << "The product of digits of entered number are: " << prod;
    return 0;
}
