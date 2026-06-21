//Q. 3 : Program to count vowels and consonants
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
        bool isupper = (ch>='A' && ch <= 'Z');
        bool islower= (ch>='a' && ch <= 'z');
        if (isupper || islower){
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
                vow++;
            }
            else {
                cons++;
            }
        }
    }
    cout << "Vowels: " << vow << '\n';
    cout << "Consonants: " << cons;
    cout << endl;
    return 0;
}