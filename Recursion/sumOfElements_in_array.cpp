#include <bits/stdc++.h>
using namespace std;
int f(int arr[], int idx, int n){
    if(idx==n-1) {
        //we only have one element left, so sum is elemen itself
        return arr[idx];
    }
    //else
    return arr[idx]+f(arr,idx+1,n);
}
int main() {
    int n=5;
    int arr[]={1,2,3,4,5};
    cout<<f(arr,0,n);

    return 0;
}