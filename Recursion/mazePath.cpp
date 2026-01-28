#include <bits/stdc++.h>
using namespace std;
//Reference- Recursion lec-06 3rd problem (last 30 mins)
//problem: To reach at the bottom right of the 2-D grid from the top left i,e (0,0) t0 (m-1,n-1)
int f(int i, int j, int m, int n){
    //base case
    if(i==m-1 and j==n-1) return 1;
    if(i>=m or j>=n) return 0;
    //self work
    return (f(i+1,j,m,n)+f(i,j+1,m,n));
}

int main() {
    f(0,0,2,3); // (0,0) se (2,3) par jana hai

    return 0;
}