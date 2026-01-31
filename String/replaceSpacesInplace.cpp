#include <bits/stdc++.h>
using namespace std;
void replaceSpace(string &s){
    int spaceCount = 0;
    for (char c : s) {
        if (c == ' ')
            spaceCount++;
    }

    int oldLength = s.length();
    s.resize(oldLength + spaceCount * 2);

    int i = oldLength - 1;
    int j = s.length() - 1;

    while (i >= 0) {
        if (s[i] == ' ') {
            s[j--] = '5';
            s[j--] = '4';
            s[j--] = '@';
        } else {
            s[j--] = s[i];
        }
        i--;
    }
    
}

int main() {
    string s;
    cout<<"enter a string:";
    getline(cin, s);
    replaceSpace(s);
    cout<<s;
    return 0;
}
