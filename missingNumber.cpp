#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"ENTER SIZE OF ARRAY : ";
    cin>>n;
    int arr[n-1];
    cout<<"ENTER "<<n-1<<" ELEMENTS IN ARRAY : ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    int nat_sum= (n*(n+1))/2;
    cout<<"sum of natural no.:"<<nat_sum<<endl;
    cout<<"missing no. :"<<nat_sum-sum;






    return 0;
}