#include <bits/stdc++.h>
using namespace std;
bool f(int arr[], int n,  int i, int x){
    //base case
    if(i==n) return false;
    //self work
    return ((arr[i]==x) || f(arr,n,i+1,x)); // logical OR only returns false if both statements are false
    
}

int main() {
    int n =5;
    int arr[]={-6,3,5,6,0};
    cout<<"enter element to be searched: ";
    int x;
    cin>>x;
    bool result = f(arr,n,0,x);
    if(result) cout<<"yes";
    else cout<<"no";
    

    return 0;
}