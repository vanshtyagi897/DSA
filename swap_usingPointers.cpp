#include <bits/stdc++.h>
using namespace std;
void swap(int*x, int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
    int x=2,y=3;
    int* px=&x;
    int* py=&y;
    swap(px,py);
    cout<<"x:"<<x<<" "<<"y:"<<y;
    return 0;
}