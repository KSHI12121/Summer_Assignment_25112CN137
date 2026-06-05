//Q. 4: Program to find largest prime factor

#include <iostream>
#include <cmath>
using namespace std;

//Function to calculate prime number
bool isprime(int n){
    int i;
    if (n<2){
        return false;
    }
    for(i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return false;
        }
    }
    return true; 
}

int main() {
    int n,i;
    //To check if there are no prime factors
    bool state=true;
    cout << "Enter number to find largest prime factor: ";
    cin >> n;
    /*Checking if each factor is prime or not starting from n (for prime numbers) till 2 
    (as 1 is not prime)*/
    for (i=n;i>=2;i--){
        if (n%i==0){
            if (isprime(i)){
                cout << "The largest prime factor is: " << i;
                state=false;
                break;
            }
        }
    }
    //To handle inputs less than 2
    if (state){
        cout << "It does not have any prime factors!";
    }
    return 0;
}