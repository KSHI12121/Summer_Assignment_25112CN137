//Q. 4 : Program to check whether number is palindrome or not

#include <iostream>
using namespace std;

int main() {
    int n,n1,i,rev=0,count=0,rem;
    cout << "Enter number to find reverse: ";
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
        rev=rev*10+rem;
        n1/=10;
    }
    if (rev==n){
        cout << "The number " << n << " is a palindrome number!";
    }
    else {
        cout << "The number " << n << " is not a palindrome number!";
    }
}