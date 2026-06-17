//Q. 1 : Program to reverse an array
#include <iostream>
using namespace std;
int main(){
	int a[100],b[100],n,i;
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
		b[n-i-1]=a[i]; //Assigning elements in another array so that it becomes reverse of first array
	}
	cout << "Reverse of the entered array is: \n";
	for (i=0;i<n;i++){
		cout << b[i] << '\t';
	}
	return 0;
}
