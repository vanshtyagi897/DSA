#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> powerSet(int arr[], int n){
    int subsets=(1<<n);
    vector<vector<int>>ans;
   for (int mask = 0; mask < subsets; mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset.push_back(arr[i]);
            }
        }
        ans.push_back(subset);
    }
    return ans;
}

int main() {
    int arr[]={1,2,3};
    int n=3;
    vector<vector<int>> result = powerSet(arr, n);
    for (auto subset : result) {
        cout << "{ ";
        for (int x : subset) cout << x << " ";
        cout << "}\n";
    }

    return 0;
}