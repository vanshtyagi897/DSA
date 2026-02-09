#include <bits/stdc++.h>
using namespace std;
int unitSum(int num){
    if(num<=9) return num;
    int sum=0;
    while(num>0){
        sum+=(num%10);
        num/=10;
    }
   return unitSum(sum);   
}

int main() {
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<unitSum(num);

    return 0;
}