//Q. 4 : Program to find common elements
//The program will follow the same logic as intersection of two arrays

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
    int c[100]; //Initialising array to enter intersection
    int x=0; //To count elements in new array

    for (i=0;i<n1;i++){ //Looping through each element of first array
        bool found=false;
        for (k=0;k<n2;k++){
            if (b[k]==a[i]){ //Checking if the element exists in array b
                found=true;
                break;
            }
        }
        if (found){ //Checking if element is already in c if found in b to avoid duplicates
            bool state=false;
            for (k=0;k<x;k++){
                if (c[k]==a[i]){
                    state=true;
                    break;
                }
            }
            if (!state){
                c[x]=a[i]; //Adding element if not present in c
                x++;
            }
        }
    }
    cout << "Common elements of the two arrays are: \n";
    for (i=0;i<x;i++) {
        cout << c[i] << '\t';
    }
    return 0;
}