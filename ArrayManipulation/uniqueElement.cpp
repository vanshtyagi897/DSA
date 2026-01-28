#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={2,3,5,3,2,4,5};
    int size=7;
    for(int i=0;i<size;i++){
       for(int j =i+1;j<size;j++){
          if(arr[i]==arr[j]){
                arr[i]=-1;
                arr[j]=-1;
          }
       }

    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<"unique element:"<<arr[i];
        }
    }

    return 0;
}