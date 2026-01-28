#include <bits/stdc++.h>
using namespace std;
//complexity: O(q)
int f(int p, int q){
    if(q==0) return 1;
    else return f(p,q-1)*p;
}

int main() {
    int p,q; 
    cout<<"enter p and q: ";
    cin>>p>>q;
    cout<<p<<"^"<<q<<" = "<<f(p,q);//p^q

    return 0;
}