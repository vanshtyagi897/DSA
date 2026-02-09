#include <bits/stdc++.h>
using namespace std;
int getLucky(string s, int k) {
        int res=0;
        // convert string to number
        for(int i=0;i<s.length();i++){
            int num=0;
            num=s[i]-'a'+1;
            res= res*10+num;
        }
    
        // if(res<=9) return res;
    
        int sum=0;
        while(k>0){
                while(res>0){
                sum+=(res%10);
                res/=10;
            }
            k--;
        }
        return sum;


    }

int main() {
    string s="iiii";
    int k=1;
    cout<<getLucky(s,k);

    return 0;
}