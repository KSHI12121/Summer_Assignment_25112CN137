//Q.1 : Program to calculate sum of N natural numbers

#include <iostream>
using namespace std;

int main() {
    int sum,n,i;
    sum=0;
    cout << "Enter the last number to calculate sum to: ";
    cin >> n;
    for (i=1;i<=n;i++){
        sum+=i;
    }
    cout << "The sum of first " << n << " natural numbers is " << sum << ".";
    return 0;
}