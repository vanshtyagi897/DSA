//problem: if n=3 sum=1-2+3=2 (add even with -ve sign and odd with +ve sign)
#include <bits/stdc++.h>
using namespace std;
int f(int n){ //k factors of number n
    //base case:
    if(n==0) return 0;
    //assumption:
    return f(n-1) +((n%2==0)? (-n): (n)) ; // the function correctly works for n-1
}
int main() {
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<f(n);  
    return 0;
}