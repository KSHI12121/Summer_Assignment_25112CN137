//Q. 2 : Program to find nth fibonacci term

#include <iostream>
using namespace std;

int main() {
    int n,i,t1,t2,term;
    cout << "Enter number n to find nth term of Fibonacci series: ";
    cin >> n;
    //Initializing the first two terms and their sum
    t1=0,t2=1;
    term=t1+t2;
    //Error handling
    if (n<=0){
        cout << "Invalid input.";
        return 0;
    }
    //Handling specific case of n==1 and n==2
    if (n==1){
        cout << "Nth term: " << t1;
    }
    else if (n==2){
        cout << "Nth term: " << t2;
    }
    //Program for every other case, implementing the logic of Fibonacci series
    else{
        cout << "Nth term: ";
        for (i=3;i<n;i++){
            t1=t2;
            t2=term;
            term=t1+t2;
        }
        cout << term;
    }
    return 0;
}