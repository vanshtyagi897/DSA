#include <bits/stdc++.h>
using namespace std;
//brute force approach
int main() {
    int a=54, b=18;
    for(int i = max(a,b); i>=1; i--){
        if(a%i == 0 && b%i == 0){
            cout<<i;
            break;
        }
    }

    return 0;
}