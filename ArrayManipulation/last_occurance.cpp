
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v(6);
    cout<<"Enter 6 elements: "<<endl;
    for(int i=0; i<6;i++){
        cin>>v[i];
    }
    
    cout<<"Enter a number to check it's last occurance: ";
    int x;
    cin>>x;
    
    
    int occurance=-1; //if entered element is not present then return -1
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x) {
            
        occurance=i;
        break;
        }
    }
    if(occurance>=0)
    cout<<"Last occurance of "<<x<<" is at "<<occurance<<"th index";
    else cout<<"Element don't exist in the vector.";

    return 0;
}

//          for first_occurance initialize loop from zero and iterate it till v.size()-1
//          for(int i=0;i<v.size();i++){
//               //same body   }
