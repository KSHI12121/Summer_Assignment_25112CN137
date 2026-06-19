//Q. 1 : Program to add matrices
#include <iostream>
using namespace std;

int main() {
    int a[20][20],b[20][20],n,i,j;
    cout << "Enter width of square matrix: ";
    cin >> n;
    //Exception handling
    if (n<=0 || n>20){
        cout << "Invalid input";
        return 0;
    }
    int c[n][n];
    cout << "Enter elements of first matrix: \n";
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << "Enter a[" << i << "][" << j <<"]:";
            cin >> a[i][j]; 
        }
    }
    cout << "Enter elements of second matrix: \n";
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << "Enter b[" << i << "][" << j <<"]:";
            cin >> b[i][j]; 
            c[i][j]=a[i][j]+b[i][j];
        }
    }  
    cout << "The sum of the entered matrix is: \n";
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << c[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}