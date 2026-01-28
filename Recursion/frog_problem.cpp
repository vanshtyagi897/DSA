#include <bits/stdc++.h>
using namespace std;
int f(int h[], int n, int i){
    //base case
    if(i==n-1) return 0;
    if(i==n-2) return f(h,n,i+1) + abs(h[i]-h[i+1]);
    //self work
    return min( f(h,n,i+1)+abs(h[i]-h[i+1]), f(h,n,i+2)+abs(h[i]-h[i+2]));
}
int main() {
    int n=4;
    int h[]={10,30,40,20};
    cout<<f(h,n,0);
    return 0;
} 