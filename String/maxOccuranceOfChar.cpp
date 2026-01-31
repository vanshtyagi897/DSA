#include <bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string& s) {
    int arr[26]={0};
       
     for(int i=0;i<s.length();i++){
        char ch=s[i];
        int num=0;
        // if(ch>='a'  || ch<='z'){
            num= ch-'a';//converting characters to numbers (they represent indices of arr[26])
            arr[num]++;
               
        // }
    }
       
    //finding index of character with max occurence
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            ans=i;
            maxi=arr[i];
        }
    }
       
    return 'a'+ans;//convert index(number) to char again
       
        
} 


int main() {
   string s;
   cout<<"enter a string: ";
   cin>>s;
   cout<<"Character that occured maximum no. of time is : "<<getMaxOccuringChar(s);

    return 0;
}