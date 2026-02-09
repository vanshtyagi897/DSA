#include <bits/stdc++.h>
using namespace std;
vector<int> binary(int n){
    vector<int>v;
    while(n>0){
        v.push_back(n%2);
        n=n/2;

    }
    reverse(v.begin(), v.end());
    return v;
}

int main() {
    int n=4;
    vector<int> result = binary(n);

    for (int bit : result) {
        cout << bit;
    }
}