#include <bits/stdc++.h>
using namespace std;
int f(int arr[], int idx, int n){
    if(idx==n-1) {
        //we only have one element left, so it's the maximum
        return arr[idx];
    }
    //else
    return max(arr[idx], f(arr,idx+1,n));
}

int main() {
    int n=5;
    int arr[]={7,5,4,3,2};
    cout<<f(arr,0,n);

    return 0;
}