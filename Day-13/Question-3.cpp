//Q. 4 : Program to find minimum and maximum term
#include <iostream>
using namespace std;

int main(){
	int a[100],n,i,min,max;
	cout << "Enter number of elements: ";
	cin >> n;
	//Exception handling 
	if (n<=0){
		cout << "Invalid number of terms: ";
		return 0;
	}
	cout << "Enter the elements: \n";
	for (i=0;i<n;i++){
		cout << "Enter an element: ";
		cin >> a[i];
	}
	max=a[0];
	min=a[0];

	for (i=1;i<n;i++){
		if (max<a[i]){ //To find maximum term 
			max=a[i];
		}
		if (min>a[i]){ //To find minimum term
			min=a[i];
		}
	}
	cout << "The maximum term is: " << max;
	cout << "\nThe minimum term is: " << min;
	return 0;	
}