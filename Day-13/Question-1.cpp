//Q. 1 : Program to input and display an array
#include <iostream>
using namespace std;

int main(){
	int n,a[100],i;
	cout << "Enter number of elements: ";
	cin >> n;
	//Exception handling
	if (n<=0){
		cout << "Invalid input!";
		return 0;
	}
  //Array input
	cout << "Enter elements of string: \n";
	for (i=0;i<n;i++){
		cout << "Enter an element: ";
		cin >> a[i];
	}
  //Array display
	cout << "Elements of the array are: \n";
	for (i=0;i<n;i++){
		cout << a[i] << '\t';
	}	
	return 0;
}
