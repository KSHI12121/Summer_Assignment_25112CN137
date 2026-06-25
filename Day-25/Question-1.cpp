//Q. 1 : Program to merge two sorted arrays

#include<iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j = 0, k = 0 , temp;
    // traverse the arr1 and insert its element in arr3
      while(i < n1){
      arr3[k++] = arr1[i++];
    }
      
    // now traverse arr2 and insert in arr3
      while(j < n2){
      arr3[k++] = arr2[j++];
    }
    //sort the array
    for (int a=1;a<k;a++){
        for (int b=0;b<k-a;b++){
            if (arr3[b]>arr3[b+1]){
                temp=arr3[b];
                arr3[b]=arr3[b+1];
                arr3[b+1]=temp;
            }
        }
    }
}

int main(){
    int arr1[100],arr2[100],n1,n2;
    cout << "Enter no. of elements of first array: ";
    cin >> n1;
    
    cout << "Enter elements of first array: \n";
    for (int i=0;i<n1;i++){
        cout << "Enter an element: ";
        cin >> arr1[i];
    }
    cout << "Enter no. of elements of second array: ";
    cin >> n2;

    cout << "Enter elements of second array: \n";
    for (int i=0;i<n2;i++){
        cout << "Enter an element: ";
        cin >> arr2[i];
    }
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);
    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";

    return 0;
}