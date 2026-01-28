//Ex: input-[1,2,3,4,5]   output:[1,3,6,10,15]

#include <bits/stdc++.h>
using namespace std;
//don't iterate from i=0 as it's sum will be the element at i=0 itself (pass by refrence)
void running_sum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
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
    running_sum(v);//function calling
    cout<<"array with running sum: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

     return 0;
}