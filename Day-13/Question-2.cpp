//Q. 1 : Program to find sum and average of elements in an array
#include <iostream>
using namespace std;

int main(){
	int a[100],n,i,sum=0;
	cout << "Enter number of elements: ";
	cin >> n;
	//Exception handling
	if (n<=0){
		cout << "Invalid number of terms!";
		return 0;
	}
	cout << "Enter the elements: \n";
	for (i=0;i<n;i++){
		cout << "Enter an element: ";
		cin >> a[i];
		sum+=a[i];
	}
	int avg=sum/n;
	cout << "Sum of elements of the array is: " << sum;
	cout << "\nAverage of elements of the array is: " << avg;
	return 0;	
}