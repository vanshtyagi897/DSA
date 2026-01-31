#include <bits/stdc++.h>
using namespace std;
void toLower(char &ch){
    if(ch>='a' && ch<='z'){
        return;
    }
    ch=ch-'A'+'a';
}
void toHigher(char &ch){
    if(ch>='A' && ch<='Z'){
        return;
    }
    ch=ch-'a'+'A';
}


int main() {
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    toLower(ch);
    cout<<ch<<endl;
    // toHigher(ch);
    // cout<<ch<<endl;

   
    


    return 0;
}