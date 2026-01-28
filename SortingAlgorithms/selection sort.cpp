#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr){
    int n=arr.size();
    for (int i = 0; i < n-1; i++){
        int min_idx=i;
        //finding min_index of min element in sorted array
        for (int j = i+1; j < n; j++){
            if(arr[j]<arr[min_idx])
            min_idx=j;
        }
        if(i!=min_idx)
            swap(arr[i],arr[min_idx]);
        
    }
    return ;
}

int main() {
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter elements in array:";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    selectionSort(arr);

    cout<<"\nsorted array:";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}