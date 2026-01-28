/*Problem Statement:
Given an array of integers of size n. Answer q queries where you need to print the sum of values in a given range of indices from l to r (both included).
Note: The values of l and r in queries follow 1-based indexing. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"enter size: ";
    int n;
    cin>>n;
    vector<int> v(n+1,0);//size n+1 with first element as 0.
    cout<<"enter elements: ";
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    //prefix sum
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }
    int q;
    cout<<"enter no. of queries: ";
    cin>>q;
    while(q--){
        int l,r;
        cout<<"enter l and r:";
        cin>>l>>r;
        int ans= v[r]-v[l-1];
        cout<<"ans:"<<ans<<endl;

    }

    return 0;
}