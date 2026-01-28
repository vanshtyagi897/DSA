#include <bits/stdc++.h>
using namespace std;
void f(int arr[],int idx, int n){//n represents length of array
    if(idx==n) return;
    //else
    cout<<arr[idx]<<"\n";//print current index element
    f(arr,idx+1,n);// will print the remaining part of array

}

int main() {
    int n=5;
    int arr[]={4,5,6,7,8};
    f(arr,0,n);
    

    return 0;
}