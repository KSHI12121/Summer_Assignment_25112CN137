//Q. 2 : Program to check whether a number is armstrong number or not using functions
#include <iostream>
#include <cmath>
using namespace std;

//Armstrong number function
int armstrong(int n){
	int sum=0,count=0,n1,rem,i;
	n1=n;
	while (n1>0){
		count++;
		n1/=10;
	}
	n1=n;
	for (i=1;i<=count;i++){
		rem=n1%10;
		sum+=pow(rem,count);
		n1/=10;
	}
	if (n==sum){
		cout << "It is an Armstrong number!";
	}
	else {
		cout << "It is not an Armstrong number!";
	}
	return 0;
}

int main() {
	int n;
	cout << "Enter number to check whether it is Armstrong number or not: ";
	cin >> n;
	//Exception handling
	if (n<0){
		cout << "It is not an Armstrong number!";
		return 0;
	}
	armstrong(n);
	return 0;
}