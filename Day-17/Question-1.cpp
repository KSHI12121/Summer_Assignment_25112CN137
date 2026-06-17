//Q. 1 : Program to merge two arrays
#include <iostream>
using namespace std;

int main() {
    int a[100],b[100],n1,i,n2;
    cout << "Enter number of elements of first array: ";
    cin >> n1;
    cout << "Enter number of elements of second array: ";
    cin >> n2;
    //Exception handling
    if (n1<=0 || n2 <=0 || n1>100 || n2>100){
        cout << "Invalid input!";
        return 0;
    }
    cout << "Enter elements of first array: \n";
    for (i=0;i<n1;i++){
        cout << "Enter an element: ";
        cin >> a[i];
    }
    cout << "Enter elements of second array: \n";
    for (i=0;i<n2;i++){
        cout << "Enter an element: ";
        cin >> b[i];
    }
    int c[n1+n2];
    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    for (i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    //Printing the merged array
    cout << "The merged array is: \n";
    for (i=0;i<n1+n2;i++){
        cout << c[i] << '\t';
    }
    cout << endl;
    return 0;
}