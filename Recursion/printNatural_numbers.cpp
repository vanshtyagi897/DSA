#include <bits/stdc++.h>
using namespace std;
void f(int n){
    //base case
    if(n<1) return;
    // else print n-1 natural numbers (assumption)
    f(n-1);
    cout<<n<<" "; 
    
}

int main() {
    int n;
    cout<<"enter a number: ";
    cin>>n;
    f(n);

    return 0;
}