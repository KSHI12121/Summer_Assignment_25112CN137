//Q. 4 : Program to check for perfect number using functions
#include <iostream>
using namespace std;

//Function to check for perfect numbers
int perfect(int n){
	int i,sum=0;
	for (i=1;i<n;i++){
		if (n%i==0){
			sum+=i;
		}
	}
	if (sum==n){
		cout << "It is a perfect number!";
	}
	else {
		cout << "It is not a perfect number!";
	}
	return 0;
}

int main()
{
	int n;
	cout << "Enter number to check whether it is perfect number or not: ";
	cin >> n;
	perfect(n);
	return 0;
}