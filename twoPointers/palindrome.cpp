#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int arr[], int n){
    int i=0;
    int j=n-1;
    bool flag=true;
    while (i<j) {
        if(arr[i] != arr[j]){
            return false ;
        }
        i++;
        j--;
    }
    return true;
}
int main() {
    int n=5;
    int arr[]= {1,2,3,2,1};
    if(ispalindrome(arr, n)) cout<<"palindrome"<<endl;
    else cout<<"Not a palindrome"<<endl;
    
    return 0;
}