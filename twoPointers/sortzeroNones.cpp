#include <bits/stdc++.h>
using namespace std;
void sortZerosAndOnes(vector<int> &v){
    // int zeroes_count=0;
    // for(int i=0;i<v.size();i++){//count no. of zeroes
    //     if(v[i]==0) 
    //     zeroes_count++;
    // }

    // for(int i=0;i<v.size();i++){
    //     if(i<zeroes_count){// insert total 0's in starting
    //         v[i]=0;
    //     }
    //     else{// at remaining indices place 1's
    //         v[i]=1;
    //     }
    // }
    //--method 2-- Two pointers method
    int left=0;
    int right=v.size()-1;
    while(left<right){//when left==right control will come out of loop
        if(v[left]==1 && v[right]==0){//swap
            v[left++]=0;
            v[right--]=1;
        }
        if(v[left]==0){
            left++;
        }
        if(v[right]==1){
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
    cout<<"enter elements (zero & ones) in array: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortZerosAndOnes(v);

    //print sorted array
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}