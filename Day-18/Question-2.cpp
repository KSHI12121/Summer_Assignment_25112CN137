//Q. 2 : Program to implement selection sort
#include <iostream>
using namespace std;

int main() {
    int a[100],n,i,j,temp,min;
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
    //Selection sort implementation
    for (i=0;i<n-1;i++){
        min=i;
        //Putting smallest number in front
        for (j=i+1;j<n;j++){
            if (a[j]<a[min]){
                min=j;
            }
        }
        if (min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    cout << "The sorted array is: \n";
    for (i=0;i<n;i++){
        cout << a[i] << '\t';
    }
    return 0;
}