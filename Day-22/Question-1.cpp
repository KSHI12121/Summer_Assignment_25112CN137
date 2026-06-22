//Q. 1 : Program to find if string is palindrome or not
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char n1[100],n2[100];
    int i,len;
    cout << "Enter string to check whether it is palindrome or not: ";
    cin.getline(n1,100);
    len=0;
    while (true){
        if (n1[len]=='\0'){
            break;
        }
        else{
            len++;
        }
    }
    for (i=0;i<len;i++){
        n2[len-i-1]=n1[i];
    }
    for (i=0;i<len;i++){
        if (n1[i]!=n2[i]){
            cout << "The entered string is not palindrome!";
            return 0;
        }
    }
    cout << "The entered string is palindrome!";
    return 0;
}