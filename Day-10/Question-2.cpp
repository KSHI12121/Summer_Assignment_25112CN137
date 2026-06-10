//Q. 2 : Program to print reverse star pyramid
#include <iostream>
using namespace std;

int main() {
    int n,i,j,k;
    cout << "Enter number of rows: ";
    cin >> n;
    for (i=n;i>=1;i--){ // To invert the pyramid
        for (j=1;j<=n-i;j++){ // For spaces
            cout << " ";
        }
        for (k=1;k<=(2*i-1);k++){ // For stars
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}