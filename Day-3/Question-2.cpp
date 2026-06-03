//Q. 2 : Program to print prime numbers in a range

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n1,n2,i;
    cout << "Enter lower range number: ";
    cin >> n1;
    cout << "Enter upper range number: ";
    cin >> n2;
    if (n1>=n2 || n2<0){
        cout << "Invalid number.";
        return 0;
    }
    if (n1<0){
        n1=0;
    }
    int fct;
    cout << "Prime numbers between the entered numbers are: \n";
    for (i=n1;i<=n2;i++){
        fct=0;
        if (i<2){
            continue;
        }
        for (int j=2;j<=sqrt(i);j++){
            if (i%j==0){
                fct++;
                break;
            }
        }
        if (fct==0){
            cout << i << '\t';
        }
    }
    return 0;
}
