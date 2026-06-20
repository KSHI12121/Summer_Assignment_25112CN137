//Q. 3 : Program to find row-wise sum
#include <iostream>
using namespace std;

int main() {
    int a[20][20],sum=0,r,c,i,j;
    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;
    //Exception handling
    if (r<=0 || r>20 || c<=0 || c>20){
        cout << "Invalid input";
        return 0;
    }
    cout << "Enter the elements of matrix: \n";
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            cout << "Enter a[" << i << "][" << j <<"]:";
            cin >> a[i][j]; 
        }
    }
    for (i=0;i<r;i++){
        int sum=0;
        for (j=0;j<c;j++){
            sum+=a[i][j];
        }
        cout << "The sum of elements of row " << i+1 << " is: " << sum;
        cout << endl;
    }
    return 0;
}