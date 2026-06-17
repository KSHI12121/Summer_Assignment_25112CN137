//Q. 4 : Program to find duplicates in an array
#include <iostream>
using namespace std;

int main(){
	int a[100],j,k,n,i;
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
	//Finding duplicates
	cout << "Duplicate items are: \n";
	int count=0;
	for (i=0;i<n;i++){
		bool state=false;
		for (j=0;j<i;j++){
			if (a[i] == a[j]){
				state=true;
			}
		}
		if (state){
			continue;
		}
		for (k=i+1;k<n;k++){
			if (a[i]==a[k]){
				cout << a[i] << '\t';
				count++;
				break;
			}
		}
	}
	if (count==0){
		cout << "No duplicates found!";
	}
	return 0;
}