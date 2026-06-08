//Q. 3 : Program to print character triangle
#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter number of rows: ";
    cin >> n;
    for (i=1;i<=n;i++){
        for (j=65;j<65+i;j++){
            cout << (char)j;
        }
        cout << '\n';
    }
    return 0;
}