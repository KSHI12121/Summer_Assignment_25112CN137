//Q. 2 : Program to compress a string
#include <iostream>
#include <string>
using namespace std;

string compress(string &str){
    int n=str.length();
    //Return the same string as single character can not be compressed
    if (n<=1){
        return str;
    }
    string compressed= "";
    int count=1;
    for (int i=0;i<n;i++){
        //If next character is same, increase the count 
        if (i+1<n && str[i]==str[i+1]){
            count++;
        }
        else{
            //Appending the character and its result
            compressed+=str[i];
            compressed+=to_string(count);
            count=1; // Resetting the count for next character
        }
    }
    return (compressed.length()<str.length()) ? compressed:str;
}

int main() {
    string str1;
    cout << "Enter a string to compress it: ";
    getline(cin,str1);
    cout << "Original: " << str1 << endl << "Compressed: " << compress(str1) << endl;
    return 0;
}