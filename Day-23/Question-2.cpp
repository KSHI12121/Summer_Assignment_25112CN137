//Q. 2 : Program to find first repeating character
#include <iostream>
#include <string>
using namespace std;

string rep(string &s){
    bool visited[256]={false};
    for (int i=0;i<s.length();i++){
        char ch=s[i];
        if (visited[ch]){
            return string(1,ch);
        }
        visited[ch]=true;
    }
    return "-1";
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    string z=rep(s);
    if (z.compare("-1") != 0) { 
    cout << "First repeating character: " << z << endl;
    } 
    else {
    cout << "No repeating characters found." << endl;
    }
    return 0;
}