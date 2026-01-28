//sar ke upr se gya...(problem solving on recursion -3 (last problem))
#include <bits/stdc++.h>
using namespace std;
bool f(int n, int *temp){
    if(n>=0 & n<=9){
        int lastDigitOf_temp = (*temp)%10;
        (*temp) /= 10;
         return (n == lastDigitOf_temp);
    }
    bool result = (f(n/10, temp) and (n%10)== ((*temp)%10));
    (*temp)/=10;
    return result;
}
int main() {
    int n = 02421;
    int anotherNum = n;
    int *temp = &anotherNum;
    // cout<<f(n,temp);
    f(n,temp)? cout<<"yes" : cout<<"no";
    return 0;
}