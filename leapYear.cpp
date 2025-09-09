#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,t;
   cin>>t;
   while(t--){
   cin>>n;
   if(n%100==0){
    if(n%400==0){
        cout<<"leap year"<<endl;
    }
    else
    cout<<"not leap year"<<endl;
   }
   else if (n%100!=0){
    if(n%4==0)
        cout<<"leap year"<<endl;
    else cout<<"Not leap year"<<endl;
    
   }
   else
   cout<<"not leap year";
}
    
}