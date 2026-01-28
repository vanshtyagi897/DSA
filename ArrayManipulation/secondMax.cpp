#include <bits/stdc++.h>
using namespace std;
int largestelementIndex(int arr[], int size){
    int max=INT_MIN;
    int maxindex=-1;
     for(int i=0;i<size;i++){
        if(arr[i]>max) {
        max=arr[i];// max element
        maxindex=i;//index of max element
        }

    }
    return maxindex;

}

int main() {
    int arr[]={1,2,3,9,9,-6};
    int size=6;
    int index_of_max = largestelementIndex(arr,size);
    cout<<"max element: "<<arr[index_of_max]<<endl;
    //  arr[index_of_max]=-1;
    //if max comes twice/thrice and so on... then we have to make all max =-1
    int max_element= arr[index_of_max];
    for(int i=0;i<size;i++){
        if(arr[i]==max_element){
            arr[i]=-1;
        }

    }
    int index_of_smax = largestelementIndex(arr,size);
    cout<<"smax element: "<<arr[index_of_smax]<<endl;

    return 0;
}

//method 2 Without function: find max --> make max=-1 --> find smax (same as max)