//Q. 3 : Program to implement binary search
#include <iostream>
using namespace std;

int main() {
    int a[100],n,i,j,sch;
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
    cout << "Enter an element to search: ";
    cin >> sch;
    int beg,end,mid,loc=-1;
    beg=0,end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;
        if (a[mid]==sch){
            cout << "Element found at " << mid+1 << " position.";
            loc=mid;
            break;
        }
        else if (a[mid]>sch){
            end=mid-1;
        }
        else if (a[mid]<sch){
            beg=mid+1;
        }
    }
    if (loc==-1){
        cout << "Element not found!";
    }
    return 0;
}