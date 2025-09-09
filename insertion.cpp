#include<iostream>
using namespace std;
int main(){
    int pos, ele,n;
    int arr[10];
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
    cout<<"ENTER "<<n<< " ELEMENTS : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before insertion :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nENTER ELEMENT TO BE ENETERED AND POSITION : ";
    cin>>ele>>pos;
   
    int shift=0;
    for (int i = n-1; i >=pos-1; i--){
        arr[i+1]=arr[i];
        shift++;
    }
    arr[pos-1]=ele;
    cout<<"Total shifts : "<<shift<<endl;
    n++;
   
     cout<<"\nArray after insertion : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    

    



    

    
}