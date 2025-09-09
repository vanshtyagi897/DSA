#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
   vector<int>v; //vector<int>v(5);
   //for loop
   for(int i=0;i<5;i++){
    //cin>>v[i];
    int element;
    cin>>element;
   v.push_back(element);
   }
    
   for(int i=0;i<v.size();i++){//printing entered vector
    cout<<v[i]<<" ";
   }
   cout<<endl;

   v.insert(v.end()-2,7);

   //for each loop (printing edited vector)
   for(int ele:v){
    cout<<ele<<" ";
   }
   cout<<endl;

   
   

   //while loop (printing edited vector)
   int idx=0;
   while (idx<v.size()){ 
      cout<<v[idx++]<<" ";
   }
   cout<<endl;
   
return 0;

}