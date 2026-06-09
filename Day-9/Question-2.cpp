//Q. 2 : Program to print reverse number triangle
#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cout << "Enter number of rows: ";
    cin >> n;
    for (i=1;i<=n;i++){
        for(j=n;j>=i;j--){ //Descending loop for inverted triangle
            cout << n-j+1;
        }
        cout << '\n';
    }
    return 0;
}