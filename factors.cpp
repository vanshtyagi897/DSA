#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code here
    int count=0;
    for(int i=1;i<100;i++){
        if(i%3!=0 && i%2!=0 && i%5!=0){
           count++;
        }
    }
    cout<<count;

    return 0;
}