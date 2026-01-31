#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"enter a string:";
    getline(cin,s);//works with standard string only

    char name[20];
    cout<<"enter a string:";
    cin.getline(name,20);//works with character array only

    cout<<s<<endl;
    cout<<name<<endl;
    

    return 0;
}