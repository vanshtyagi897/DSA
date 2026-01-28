#include <bits/stdc++.h>
using namespace std;
void f(int n, int k){ //k factors of number n
    //base case:
    if(k<1) return;
    //assumption:
    f(n,k-1); // the function correctly prints k-1 factors of n
    //self-work:
    cout<<n*k<<" "; // print kth factor of n
}

int main() {
    int n,k;
    cout<<"enter a number and value of k: ";
    cin>>n>>k;
    f(n,k);  //4 factors of 3
    

    return 0;
}