//Q.1 : Program to find sum of digits of a number

#include <iostream>
using namespace std;

int main() {
    int n,n1,i,sum=0,count=0,rem;
    cout << "Enter number to find sum of digits: ";
    cin >> n;
    if (n<0){
        n=n*(-1);
    }
    n1=n;
    while (n1>0){
        count++;
        n1/=10;
    }
    n1=n;
    for (i=0;i<count;i++){
        rem=n1%10;
        sum=sum+rem;
        n1/=10;
    }
    cout << "Sum of digits of entered number is: " << sum;
    return 0;
}