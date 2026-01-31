#include <bits/stdc++.h>
using namespace std;


void reverse_string(string &str, int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }

}
int length(string str){
    int c=0;
    for(int i=0;str[i]!='\0';i++){
        c++;
    }
    return c;
}

int main() {
    string str;
    cout<<"enter your string: ";
    cin>>str;
    cout<<"length of string is : "<<length(str)<<endl;
    int n=length(str);
    reverse_string(str,n);
    cout<<"reversed string : "<<str;
    return 0;
}