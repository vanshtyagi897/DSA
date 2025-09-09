// Find the difference between the sum at even indices to the sum at odd indices
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v={1,2,3,4,5,6};
    int sum=0;
    for (int i = 0; i <v.size(); i++){  
        if(i%2==0) sum+=v[i];
        else sum-=v[i];
    }
    cout<<sum;
    
    

    return 0;
}