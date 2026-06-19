//Q. 4 : Program to find sum of diagonal elements
#include <iostream>
using namespace std;

int main() {
    int a[20][20],sum=0,n,i,j;
    cout << "Enter width of square matrix: ";
    cin >> n;
    //Exception handling
    if (n<=0 || n>20){
        cout << "Invalid input";
        return 0;
    }
    int c[n][n];
    cout << "Enter the elements of matrix: \n";
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << "Enter a[" << i << "][" << j <<"]:";
            cin >> a[i][j]; 
            if (i==j || i+j==n-1){
                sum+=a[i][j];
            }
        }
    }
    cout << "The sum of diagonal elements is: " << sum;
    return 0;
}