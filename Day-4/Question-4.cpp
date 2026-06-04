//Q. 4 : Program to print Armstrong numbers in a range

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int min,max,count=0,rem,n1,i,arm=0;
    cout << "Enter range to print Armstrong numbers: ";
    cin >> min >> max;
    //Exception handling
    if (min>max || max<0){
        cout << "Invalid input!";
        return 0;
    }
    //If minimum value is less than 0, starting the calculation from 0
    else if (min<0){
        min=0;
    }
    cout << "Armstrong numbers between " << min << " and " << max << " are: \n" ;
    for (i=min;i<=max;i++){
        //Resetting values for next iteration
        count=0;
        arm=0;
        n1=i;
        //Counting the number of digits
        if (n1==0){
            count=1;
        }
        while (n1>0){
            count++;
            n1/=10;
        }
        //Reassigning value to n1
        n1=i;
        //Calculating sum of digits raised to exponents
        for(int j=0;j<=count;j++){
        rem=n1%10;
        arm+=pow(rem,count);
        n1/=10;
        }
        //Printing the Armstrong numbers while ignoring the other numbers
        if (i==arm){
            cout << arm << '\t';
        }
        else {
            continue;
        }
    }
    return 0;
}