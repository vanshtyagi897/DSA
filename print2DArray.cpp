#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cout<<"enter no. of rows and cols :";
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter elements : \n";
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Entered array is : ";
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}