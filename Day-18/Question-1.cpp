//Q. 1 : Program to implement bubble sort
#include <iostream>
using namespace std;

int main() {
    int a[100],n,i,j,temp;
    cout << "Enter number of elements: ";
    cin >> n;
    //Exception handling
    if (n<=0 || n > 100){
        cout << "Invalid input";
        return 0;
    }
    cout << "Enter array elements: \n";
    for (i=0;i<n;i++){
        cout << "Enter an element: ";
        cin >> a[i];
    }
    //Bubble sort implementation
    for (i=1;i<n;i++){
        for (j=0;j<n-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //Printing the sorted array
    cout << "The sorted array is: \n";
    for (i=0;i<n;i++){
        cout << a[i] << '\t';
    }
    return 0;
}