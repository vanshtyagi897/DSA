#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"enter size of array: ";
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<"enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    const int N= 1e5+10;
    vector<int>freq(N,0); // a freq array with size N and all elements as 0
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    cout<<"enter queries: ";
    int q;
    cin>>q;
    while(n--){
        int queryelement;
         cout<<"enter queryelement: ";
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
       
    }

    return 0;
}