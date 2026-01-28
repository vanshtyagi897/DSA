#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter a number: ";
    cin>>n;
    //find no. of digits in number
    int digits=0;
    int temp=n; // store value of n in x, bcz it's going to change
    while(temp>0){
        temp=temp/10;
        digits++;
    }
    int x=n; // store value of x i.e. value of n in y, bcz it will change
    int sum=0;
    while(x>0){
        int rem=x%10;
        sum+=(int)round(pow(rem,digits)); 
        x=x/10;
    }
    if(sum==n) 
         cout<<"yes";
    else 
        cout<<"no";

    return 0;
}