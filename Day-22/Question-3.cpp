//Q. 3 : Program to find character frequency
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char n[100],freq;
    int i,len,x=0;
    cout << "Enter a string: ";
    cin.getline(n,100);
    len=0;
    while (true){
        if (n[len]=='\0'){
            break;
        }
        else{
            len++;
        }
    }
    cout << "Enter character to find frequency:(case sensitive)";
    cin >> freq;
    for (i=0;i<len;i++){
        if (n[i]==freq){
            x++;
        }
    }
    cout << "The frequency of entered character is: " << x;
    return 0;
}