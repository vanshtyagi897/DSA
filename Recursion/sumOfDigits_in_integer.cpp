#include <bits/stdc++.h>
using namespace std;
int f(int n){
    if(n>=0 && n<=9) return n;
    else return f(n/10) + n%10;
}

int main() {
    int n;
    cout<<"enter a no.:";
    cin>>n;
    cout<<"sum of digits of "<<n<<" is "<<f(n)<<endl;

    return 0;
}