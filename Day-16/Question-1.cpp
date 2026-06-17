//Q. 1 : Program to find missing numbers in an array
#include <iostream>
using namespace std;

int main(){	
	int n,b,i;
	cout << "Enter number of terms: ";
	cin >> n;
	//Exception handling
	if (n<=0){
		cout <<	"Invalid input.";
		return 0;
	}
	cout << "Enter terms such that one term is missing:(starting from 1) \n";
	long long arrsum=0;
	for (i=0;i<n;i++){
		cout << "Enter a term: ";
		cin >> b;	
		arrsum+=b;
	}
	//Finding missing terms
	long long sum=((n+1)*(n+2))/2;
	long long x=sum-arrsum;
	cout << "The missing terms is: " << x; 
	return 0;
}
