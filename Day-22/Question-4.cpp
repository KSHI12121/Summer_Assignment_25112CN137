//Q. 4 : Program to remove spaces from a string
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char n[100],n2[100];
    int i,len,y=0;
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
    for (i=0;i<len;i++){
        if (n[i]!=' '){
            n2[y]=n[i];
            y++;
        }
    }
    cout << "The string after removing all the spaces is: \n";
    for (i=0;i<y;i++){
        cout << n2[i];
    }
    return 0;
}