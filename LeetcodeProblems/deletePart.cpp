#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part) {
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main() {
        string s;
        cout<<"enter string: ";
        getline(cin,s);

        string part;
        cout<<"enter part to be deleted: ";
        getline(cin,part);

        cout<<"final string: "<<removeOccurrences(s,part);



    return 0;
}