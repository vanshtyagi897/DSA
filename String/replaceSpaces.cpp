#include <bits/stdc++.h>
using namespace std;
//problem: replace space in the string with @40 example: Vansh Tyagi -> Vansh@45Tyagi
string replaceSpaces(string &s){
    string temp=""; //a new empty string
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('5');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}

int main() {
    string s;
    cout<<"enter a string:";
    getline(cin,s);//accepts a string with spaces
    cout<<replaceSpaces(s);



    return 0;
}