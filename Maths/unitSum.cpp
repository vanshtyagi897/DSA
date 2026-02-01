#include <bits/stdc++.h>
using namespace std;
int unitSum(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    if(sum<9) return sum;
    return unitSum(sum);
}

int main() {
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<unitSum(n);

    return 0;
}