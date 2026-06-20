//Q. 1 : Program to find multiplication of matrices
#include <iostream>
using namespace std;

int main() {
    int a[20][20],b[20][20],rows1,col1,rows2,col2,i,j,k;
    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> col1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> col2;
    //Exception handling
    if (rows1<=0 || rows1>20 || col1 <=0 || col1 >20 || rows2<=0 || rows2>20 || col2 <=0 || col2>20 || rows2!=col1){
        cout << "Invalid input";
        return 0;
    }
    int c[rows1][col2];
    cout << "Enter elements of first matrix: \n";
    for (i=0;i<rows1;i++){
        for (j=0;j<col1;j++){
            cout << "Enter a[" << i << "][" << j <<"]:";
            cin >> a[i][j]; 
        }
    }
    cout << "Enter elements of second matrix: \n";
    for (i=0;i<rows2;i++){
        for (j=0;j<col2;j++){
            cout << "Enter b[" << i << "][" << j <<"]:";
            cin >> b[i][j]; 
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    //Multiplying the matrices
    for (i=0;i<rows1;i++){
        for (j=0;j<col2;j++){
            c[i][j]=0;
            for (k=0;k<col1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout << "The multiplication of entered matrices is: \n";
    for (i=0;i<rows1;i++){
        for(j=0;j<col2;j++){
            cout << c[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}