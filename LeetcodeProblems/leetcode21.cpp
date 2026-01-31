#include <bits/stdc++.h>
using namespace std;

int main() {
    int val=2;
    vector<int>arr = {3,2,2,3};
    // int arr[]={3,2,2,3};
    int k=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=val){
            arr[k]=arr[i];
            k++;
        }
    }
    cout<<"No. of elements not equal to "<<val<<" are "<<k<<endl;
    return 0;
}