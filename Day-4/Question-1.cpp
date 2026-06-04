//Q. 1 : Program to generate Fibonacci series

#include <iostream>
using namespace std;

int main() {
    int n,i,t1,t2,nxt;
    cout << "Enter number of terms: ";
    cin >> n;
    //Initializing the first two terms and their sum
    t1=0,t2=1;
    nxt=t1+t2;
    //Error handling
    if (n<=0){
        cout << "Invalid input.";
        return 0;
    }
    //Handling specific case of n==1
    if (n==1){
        cout << "Fibonacci series :\t" << t1;
    }
    //Program for every other case, implementing the logic of Fibonacci series
    else{
        cout << "Fibonacci series :\t" << t1 << '\t' << t2;
        for (i=3;i<=n;i++){
            cout << '\t' << nxt;
            t1=t2;
            t2=nxt;
            nxt=t1+t2;
        }
    }
    return 0;
}