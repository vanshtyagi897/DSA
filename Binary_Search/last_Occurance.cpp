#include <bits/stdc++.h>
using namespace std;
int firstOccurance(int arr[], int n, int key){
    int beg=0;
    int end=n-1;
    int first_occ=-1;
    while(beg<=end){
        int mid = beg+(end-beg)/2;
        if(arr[mid]==key){
           first_occ=mid;
           beg=mid+1;//for last occurance, element will lie on the right side.
        }
        else if(key<arr[mid]) end=mid-1;
        else beg=mid+1;
    
    }
    return first_occ;
}

int main() {
    int arr[]={2,5,5,5,6,6,8,9,9,9};
    int n=10;
    int x=9;
    cout<<firstOccurance(arr,n,x);
    return 0;
}