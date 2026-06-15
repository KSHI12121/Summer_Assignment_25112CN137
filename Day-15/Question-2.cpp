//Q. 2 : Program to rotate array left
#include <iostream>
using namespace std;

void rotate(int a[],int n){
	int i,temp;
	temp=a[0];
	for (i=0;i<n-1;i++){
		a[i]=a[i+1];
	}	
	a[n-1]=temp;
}
int main(){
	int a[100],n,d,i;
		cout << "Enter number of elements in array: ";
	cin >> n;
	//Exception handling
	if (n<=0){
		cout << "Invalid input!";
		return 0;
	}
	cout << "Enter elements of array: \n";
	for (i=0;i<n;i++){
		cout << "Enter an element: ";
		cin >> a[i];
	}
	/*Rotating an array left means that if for example an array is a={1,2,3,4,5} 
	then after rotating the array to the left once the new array will become a={2,3,4,5,1}
	*/
	cout << "How many times array should be rotated: ";
	cin >> d;
	for (i=1;i<=d;i++){
		rotate(a,n);
	}
	cout << "The array after rotating is: \n";
	for (i=0;i<n;i++){
		cout << a[i] << '\t';
	}
	cout << endl;
	return 0;
}