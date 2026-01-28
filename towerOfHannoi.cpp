#include <bits/stdc++.h>
using namespace std;
void TOH(char s, char m, char d, int n){
    //for only one disk in source
    if(n==1){
        cout<<"move disk 1 from "<<s<<" to "<<d<<endl;
        return;
    }
    //move n-1 disks from source to mediator using destination.
    TOH(s,d,m,n-1);
    //move n th disk from source to destination.
    cout<<"move disk "<<n<<" from "<<s<<" to "<<d<<endl;
    //move n-1 disks from mediator to destination using source.
    TOH(m,s,d,n-1);
}

int main() {
    int n;
    cout<<"enter no. of disks: ";
    cin>>n;
    TOH('s','m','d',n);
    return 0;


    return 0;
}