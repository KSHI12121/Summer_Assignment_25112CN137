//Q. 4 : Program to print repeated number pattern

#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter number of rows: ";
    cin >> n;
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            cout << i;
        }
        cout << '\n';
    }
    return 0;
}