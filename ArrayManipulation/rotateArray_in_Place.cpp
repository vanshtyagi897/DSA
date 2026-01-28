#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr(5);
    //insert elements;
    cout<<"enter elements: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter value of k: ";
    cin>>k;
    k=k % arr.size();
    reverse(arr.begin(),arr.end());//reverse whole array
    reverse(arr.begin(),arr.begin()+k);//reverse till k
    reverse(arr.begin()+k,arr.end());// reverse from k to end

    // print changed array
    cout<<"changed array: ";
    // for(int i:arr){
    //     cout<<i<<" ";
    // 
    //     }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}