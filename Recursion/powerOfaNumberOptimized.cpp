#include <bits/stdc++.h>
using namespace std;
//highly optimized code with complexity log(q)
int f(int p, int q){
    if(q==0) return 1;
    if(q%2==0){ //q is even
        int result = f(p,q/2);
        return  result * result;
    }
    else{ // q is odd
        int result = f(p,(q-1)/2);
        return p * result * result;
    }
}

int main() {
    int p,q; 
    cout<<"enter p(number) and q(exponent): ";
    cin>>p>>q;
    cout<<p<<"^"<<q<<" = "<<f(p,q);//p^q


    return 0;
}