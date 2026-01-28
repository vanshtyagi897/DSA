#include <bits/stdc++.h>
using namespace std;
bool isPrefixSuffixSumEqual(vector<int> v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }
    int prefix_sum=0;
    int suffix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum += v[i];
        suffix_sum = total_sum - prefix_sum;
        if(prefix_sum==suffix_sum){
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    vector<int>v;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<isPrefixSuffixSumEqual(v);

    return 0;
}