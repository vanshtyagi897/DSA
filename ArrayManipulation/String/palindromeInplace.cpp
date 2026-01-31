#include <bits/stdc++.h>
using namespace std;
//cheeck whether a string is palindrome or not (alphabets are case-insensitive)
char toLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    ch=ch-'A'+'a';
    return ch;
}
bool isPalindrome(string &s){
    int n=s.length();
    int i=0;
    int j=n-1;
    bool flag = true;
    while(i<=j){
        if(toLower(s[i])!=toLower(s[j])) 
            return 0;
        else {
            i++;
            j--;
        }    
        return 1;
    }
}

int main() {
    string s;
    cout<<"enter a string: ";
    cin>>s;
    if(isPalindrome(s)) cout<<"Palindrome";
    else cout<<"no";
    return 0;
}