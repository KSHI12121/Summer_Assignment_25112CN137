//Q. 2 : Program to find frequency of an element
#include <iostream>
using namespace std;

int main()
{
	int a[100],i,n,count,freq;
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
	//Frequency of element
	cout  << "Enter an element to display its frequency: ";
	cin >> freq;
	for (i=0;i<n;i++){
		if (freq==a[i]){
			count++;
		}
	}
	cout << "Frequency of " << freq << " is: " << count;
	return 0;
}