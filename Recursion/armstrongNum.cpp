#include <bits/stdc++.h>
using namespace std;
//copied from powerOfaNumberOptimised code
int pow(int p, int q){
    if(q==0) return 1;
    if(q%2==0){ //q is even
        int result = pow(p,q/2);
        return  result * result;
    }
    else{ // q is odd
        int result = pow(p,(q-1)/2);
        return p * result * result;
    }
}

int f(int n,int d){
    if(n==0) return 0;
    return  pow(n%10,d) + f(n/10,d) ;
}

int main() {
    int n,d;
    cout<<"Enter number: ";
    cin>>n;
    int numOfDigits=0;
    int temp=n;
    while(temp>0){
        temp=temp/10;
        numOfDigits++;
    }
    if (f(n,numOfDigits)==n) cout<<"yes";
    else cout<<"no";

    return 0;
}