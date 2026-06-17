//Q. 3 : Program for Fibonacci series using function
#include <iostream>
using namespace std;

//Function for Fibonacci series
int fibo(int n){
	if (n==1){
		return 0;
	}
	if (n==2) {
		return 1;
	}
	else {
		return fibo(n-1)+fibo(n-2);
	}
}

int main(){
	int n,i;
	cout << "Enter number of terms:  ";
	cin >> n;
	//Exception handling
	if (n<=0){
		cout << "Invalid number of terms!";
		return 0;
	}
	cout << "Fibonacci series: \n";
	for (i=1;i<=n;i++){
		cout << fibo(i) << '\t';
	}
	return 0;
}