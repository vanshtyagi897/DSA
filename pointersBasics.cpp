#include <bits/stdc++.h>
using namespace std;

int main() {
    int x=3;
    float y=7.7;
    char ch='H';
    int *ptr1 =&x ;
    float *ptr2= &y;
    char *ptr3=&ch;
    cout<<ptr1<<"\n"<<ptr2<<"\n"<<ptr3<<endl;
    //use of derefrencing operator
    cout<<"value at address stored in ptr1:"<<*ptr1<<endl;
    cout<<"value at address stored in ptr2:"<<*ptr2<<endl;
    cout<<"value at address stored in ptr3:"<<*ptr3<<endl;
    double z= 4.45;
    double *ptr4;
    ptr4=&z;
    cout<<ptr4<<endl;
    *ptr1=4;//value od x has changed
    cout<<*ptr1<<endl;


    return 0;
}