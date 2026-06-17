//Q. 3 : Program to find second largest number
#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int a[100],i,n,max,max2;
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
	max=INT_MIN;
	max2=INT_MIN;
	//Comparing with each element
	for (i=0;i<n;i++){
		if (max<a[i]){
			max2=max;
			max=a[i];
		}
		else if (a[i]>max2 && a[i]<max){
			max2=a[i];
		}
	}
	cout << "The second largest number is: " << max2;
	return 0;
}