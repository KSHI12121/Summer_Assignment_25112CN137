//Q.2 : Program to print multiplication table

#include <iostream>
using namespace std;

int main() {
    int n,i,mult;
    cout << "Enter number to print multiplication table: ";
    cin >> n;
    for (i=1;i<=10;i++){
        mult=i*n;
        cout << n << " * " << i << " = 5" << mult << '\n';
    }
    return 0;
}