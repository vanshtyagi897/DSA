#include <bits/stdc++.h>
using namespace std;
void sortEvenAndOdd(vector<int>&v){
    int left=0;
    int right=v.size()-1;
    while(left<right){
        if(v[left]%2!=0 && v[right]%2==0 ){
            swap(v[left],v[right]);
            left++;
            right++;
        }
        if(v[left]%2==0){
            left++;
        }
        if(v[right]%2!=0){
            right--;
        }
    }
    return;
}

int main() {
  cout<<"enter the size of array: ";
    int n;
    cin>>n;
    vector<int>v;
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortEvenAndOdd(v);

    //print sorted array
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;


    return 0;
}