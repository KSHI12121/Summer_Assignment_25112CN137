//Q. 2 : Program to count words in a sentence
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char n[100];
    int i,len,spaces=0;
    cout << "Enter string to count no. of spaces: ";
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
        if (n[i]==' '){
            spaces++;
        }
    }
    cout << "The number of spaces in the sentence is: " << spaces;
    cout << endl;
    return 0;
}