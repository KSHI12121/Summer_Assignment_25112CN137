//Program to implement linear search
#include <iostream>
using namespace std;

int main()
{
	int a[100],i,n,sch;
	cout << "Enter number of terms: ";
	cin >> n;
	//Exception handling
	if (n<=0){
		cout << "Invalid number of terms!";
		return 0;
	}
	//Array elements
	cout << "Enter elements of array: \n";
	for (i=0;i<n;i++){
		cout << "Enter an element: ";
		cin >> a[i];
	}
	//Linear searching
	cout << "Enter an element to search: ";
	cin >> sch;
	for (i=0;i<n;i++){
		if (sch==a[i]){
			cout << "Element found at index " << i << "!";
			return 0; 
		}
	}
	cout << "Element not found!";
	return 0;
}
