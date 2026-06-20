//Q. 2 : Program to check symmetric matrix
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
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (a[i][j]!=a[j][i]){
                cout << "The entered matrix is not symmetric!\n";
                return 0;
            }
        }
    }
    cout << "The entered matrix is symmetric!\n";
    return 0;
}