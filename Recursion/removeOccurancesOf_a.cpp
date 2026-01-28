// remove the occurances of 'a' from a string
#include <bits/stdc++.h>
using namespace std;
string f(string &s,int idx, int n){
    if(idx==n) return ""; //base case
    string curr ="";
    curr += s[idx];
    return ((s[idx]=='a')? "" : curr) + f(s,idx+1,n);
}

int main() {
    int n=6;
    string s= "apkmab";
    
    cout<<f(s,0,n);

    return 0;
}