//Q. 2 : Program to reverse a number

#include <iostream>
using namespace std;

int main() {
    int n,n1,i,rev=0,count=0,rem;
    bool sign=true;
    cout << "Enter number to find reverse: ";
    cin >> n;
    if (n<0){
    n=n*(-1);
    sign=false;
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
    if (sign){
        cout << "Reverse of entered number is: " << rev;
    }
    else{
        cout << "Reverse of entered number is: " << (-1)*rev;
    }
    return 0;
}
