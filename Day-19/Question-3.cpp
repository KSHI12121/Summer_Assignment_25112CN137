//Q. 3 : Program to find transpose of entered matrix
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
    cout << "Enter the elements of matrix: \n";
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << "Enter a[" << i << "][" << j <<"]:";
            cin >> a[i][j]; 
            b[j][i]=a[i][j];
        }
    }
    cout << "The transpose entered matrix is: \n";
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << b[i][j] << '\t';
        }
        cout << endl;
    }  
}