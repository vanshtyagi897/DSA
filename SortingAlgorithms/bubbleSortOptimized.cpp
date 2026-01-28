//Optimize bubble sort in case of nearly sorted array.
#include <bits/stdc++.h>
using namespace std;
 void bubbleSort(vector<int> &v) {//pass by ref.
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for (int j = 0; j < n-1-i; j++)
        {
            if(v[j]>v[j+1]){ 
                swap(v[j],v[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;//if swapped is still false it means array is sorted
    }
    return;
 }

int main() {
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>v(n); //remember how the size is declared in the round braces
    cout<<"\nEnter elements in array\n"<<endl;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    //sort array
    bubbleSort(v);
   
    cout<<"sorted array\n";//print sorted array
    for (int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    

    return 0;
}