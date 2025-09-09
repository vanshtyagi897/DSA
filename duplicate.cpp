#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER SIZE : ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<< " elements in array :\n ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found =false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
         if(arr[i]==arr[j]){
            cout<<arr[i]<<" ";
            found = true;
         }
        }
    }
    if(!found) cout<<"No duplicates found.";


    return 0;
}