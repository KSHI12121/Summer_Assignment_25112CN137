//Q. 3 : Program print number pyramid
#include <iostream>
using namespace std;

int main() {
    int n,i,j,k,l;
    cout << "Enter number of rows: ";
    cin >> n;
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){ //For spaces
            cout << " ";
        }
        for (k=1;k<=(2*i+1)/2;k++){ //For first half of the column
            cout << k;
        }
        for (l=(2*i-1)/2;l>=1;l--){ //For second half of the column
            cout << l;
        }
        cout << '\n';
    }
    return 0;
}