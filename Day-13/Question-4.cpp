//Q. 3 : Program to count even and odd elements
#include <iostream>
using namespace std;

int main(){
	int a[100],n,i,ceven=0,codd=0;
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
		if (a[i]%2==0){
			ceven++;
		}
		else{
			codd++;
		}
	}
	cout << "Number of even elements are: " << ceven;
	cout << "\nNumber of odd elements are: " << codd;
	return 0;
}