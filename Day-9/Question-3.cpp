//Q. 3 : Program to print repeated character pattern

#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter number of rows: ";
    cin >> n;
    for (i=0;i<n;i++){ //For rows
        for (j=0;j<=i;j++){ //For columns
            cout << (char)(65+i);//Converting ASCII values into character using type casting
        }
        cout << '\n';
    }
    return 0;
}