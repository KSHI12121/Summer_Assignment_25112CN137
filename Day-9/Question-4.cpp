//Q. 4 : Program to print hollow square pattern
#include <iostream>
using namespace std;

int main() {
    int rows,columns,i,j;
    cout << "Enter no. of rows: ";
    cin >> rows;
    //For square, rows=columns
    //First loop for rows
    for (i=1;i<=rows;i++){
        //For first and last row
        if (i==1 || i==rows){
            for (j=1;j<=rows;j++){
                cout << '*';
            }
            cout << '\n';
        }
        //For every other row
        else{
            for (j=1;j<=rows;j++){
                //For first and last column
                if (j==1 || j==rows){
                    cout << '*';
                }
                //For other columns
                else {
                    cout << ' ';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}