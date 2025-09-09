#include <bits/stdc++.h>
using namespace std;

void process(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<" "<<*(arr+i)<<"\n";
    }
    //if i change the value at 1st index, it will reflect on the original array
    *(arr+1)=5;
}
int main() {
    int arr[3] ={1,2,3};
    int n=3;
    process(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }


    return 0;
}