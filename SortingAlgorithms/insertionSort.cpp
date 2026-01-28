#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int *arr,int n ){
    //start loop from i=1 bcz we assume first element to be sorted.
    for(int i=1;i<n;i++){
        int j=i; 
        while(j>0 && arr[j]<arr[j-1]){
            //swap arr[j] and arr[j-1]
            int temp= arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}

int main() {
    int arr[]={2,1,5,3,7,8};
    int n=6;
   insertion_sort(arr,n);
   for(int x : arr){
    cout<<x<<" ";
   }

    return 0;
}