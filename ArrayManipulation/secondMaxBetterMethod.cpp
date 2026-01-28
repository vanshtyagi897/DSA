#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={1,2 ,-1,10,10};
    int size=5;
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"max: "<<max<<endl;

    int smax=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>smax && arr[i]!=max) smax=arr[i];
    }
    if(smax==INT_MIN){
        cout<<"no second max exists."<<endl;
    }
    else{
        cout<<"smax: "<<smax<<endl;
    }

    return 0;
}