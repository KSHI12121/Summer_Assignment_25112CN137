//Q. 1 : Program to print star pyramid
#include <iostream>
using namespace std;

int main() {
    int n,i,j,k;
    cout << "Enter number of rows: ";
    cin >> n;
    for (i=1;i<=n;i++){
        //For spaces
        for (j=1;j<=n-i;j++){
            cout << " ";
        }

        //For stars
        for (k=1;k<=(2*i-1);k++){
            cout << "*";
        }
        //For changing the line
        cout << '\n';
    }
    return 0;
}