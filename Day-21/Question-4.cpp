//Q. 4 : Program to convert lowercase to uppercase
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char n[100];
    int vow=0,cons=0;
    cout << "Enter a string: ";
    cin.getline(n,100);
    //Finding length of string
    int length=strlen(n);
    for (int i=0;i<length;i++){
        char ch=n[i];
        bool islower = (ch>='a' && ch <= 'z');
        if (islower){
            int asc= (int) ch;
            n[i]=((char)(asc-32));
        }
    }
    cout << "The new string is: \n";
    for (int i=0;i<length;i++){
        cout << n[i];
    }
    cout << endl;
    return 0;
}