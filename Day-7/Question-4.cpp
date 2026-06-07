//Q. 4 : Program for recursive reverese of a number

#include <iostream>
using namespace std;
//Recursive function to reverse a number
int reverse(int n,int rev=0){
    if (n==0){
        return rev;
    }
    int rem=n%10;
    rev=rev*10+rem;
    return reverse(n/10,rev);

}

int main(){
    int n,rev;
    cout << "Enter number to find reverse: ";
    cin >> n;
    if (n<0){
        n*=-1;
    }
    //Calling the function
    rev=reverse(n);
    cout << "Reverse of the entered number is: " << rev;
    return 0;
}