#include <bits/stdc++.h>
using namespace std;
/*Euclid's theorem: gcd(54,72) = gcd(54,(72-54)) = gcd(18,(54-18)) = gcd(18,(36-18)) = 18
also gcd (54,72)=gcd(54,(72%54))=....
i.e., gcd(a,b) = gcd(a,b%a) where b>a or gcd(a,b)=gcd(a,b-a) where b>a */

int gcd(int a, int b){ //a>b
    //base case
    if(b==0) return a;
    //self work
    return gcd(b,a%b);
}
int main() {
    int a,b;
    cout<<"enter 2 numbers: ";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}