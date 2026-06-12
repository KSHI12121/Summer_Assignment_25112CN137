//Q. 1 : Program to find if a number is palindrome or not using functions
#include <iostream>
using namespace std;

//Function to check if number is palindrome or not
int palindrome(int n) {
	int n1=n,sum=0,rem;
	while (n1>0){
		rem=n1%10;
		sum=(sum*10)+rem;
		n1/=10;
	}
	if (n==sum){
		cout << "It is a palindrome number!";
	}
	else {
		cout << "It is not a palindrome number!";
	}
	return 0;
}

int main() {
	int n;
	cout << "Enter number to check whether it is palindrome or not: ";
	cin >> n;
	//Exception handling
	if (n<0){
		cout << "It is not a palindrome number!";
		return 0;
	}
	palindrome(n);
	return 0;
}