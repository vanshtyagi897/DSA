//Problem sqrt(16)=4, sqrt(24)=4 return floor values in case of imperfect sqrt.
#include <bits/stdc++.h>
using namespace std;
int sqRoot(int x){
    int beg=0;
    int end=x;
    int ans=-1;
    while(beg<=end){
        int mid = beg+(end-beg)/2;
        int sq=mid*mid;
        if(sq==x){
           return mid;
        }
        else if(sq<x){
            ans=mid;
            beg=mid+1;
        }
        else end=mid-1;
    
    }
    return ans;
}

int main() {
    int x=24;
    cout<<sqRoot(x);
    return 0;
}