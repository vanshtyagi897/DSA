#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v={1,2,3,7,6,6};

    bool isSorted=true; //true=1, false=0
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1]) {
            isSorted=false;
            break;
        }
    }
    cout<<isSorted<<endl;
    return 0;
}