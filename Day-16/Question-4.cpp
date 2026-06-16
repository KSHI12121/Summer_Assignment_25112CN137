// Q. 4 : Program to move zeroes to the end
#include <iostream>
using namespace std;

int main() {
    int a[100], n, i;    
    cout << "Enter number of elements in array: ";
    cin >> n;
    
    // Exception handling
    if (n <= 0) {
        cout << "Invalid input!\n";
        return 0;
    }  
    cout << "Enter elements of array: \n";
    for (i = 0; i < n; i++) {
        cout << "Enter an element: ";
        cin >> a[i];
    }
    
    //Keeping track of non-zero index
    int x = 0; 
    for (i = 0; i < n; i++) {
        // If the current element is NOT zero, swap it to the front-most available spot
        if (a[i] != 0) {
            int temp = a[x];
            a[x] = a[i];
            a[i] = temp;
            x++; 
        }
    }
    cout << "The array after moving the zeroes to the end is: \n";
    for (i = 0; i < n; i++) {
        cout << a[i] << '\t';
    }
    cout << endl;
    
    return 0;
}
