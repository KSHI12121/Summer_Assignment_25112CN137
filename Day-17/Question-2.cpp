//Q. 2 : Program to find union of two arrays
#include <iostream>
using namespace std;

int main() {
    int a[100],b[100],n1,i,k,n2;
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
    int c[n1+n2]; //Initialising array to enter union
    int x=0; //To count elements in new array

    for (i=0;i<n1;i++){ //Adding unique elements of first array
        bool state=false;
        for (k=0;k<x;k++){
            if (c[k]==a[i]){ //Checking if the element already exists in array c
                state=true;
                break;
            }
        }
        if (!state){
            c[x]=a[i]; //Adding element if not present in c
            x++;
        }
    }

    for (i=0;i<n2;i++){ //Adding unique elements of second array
        bool state=false;
        for (k=0;k<x;k++){
            if (c[k]==b[i]){ //Checking if the element already exists in array c
                state=true;
                break;
            }
        }
        if (!state){
            c[x]=b[i]; //Adding element if not present in c
            x++;
        }
    }
    
    cout << "Union of the two arrays is: \n";
    for (i=0;i<x;i++) {
        cout << c[i] << '\t';
    }
    return 0;
}