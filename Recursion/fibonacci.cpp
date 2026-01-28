#include <bits/stdc++.h>
using namespace std;
// 0 1 2 3 4 5 6 7   number
// 0 1 1 2 3 5 8 13  fibonacci
int fib(int n){
    if(n==0 || n==1) return n;
    //else
    return fib(n-1)+fib(n-2);

}

int main() {
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<n<<"th fibonacci number= "<<fib(n);
    

    return 0;
}