#include <bits/stdc++.h>
using namespace std;
#define MAX 100 // max size of stack (capacity)

class Stack{
    int arr[MAX];
    int top;
    public:
          Stack(){
            top=-1;
          }
    void push(int x){
        if(top>=MAX-1){
            cout<<" stack overflow"<<endl;
        }
        else{
            top++;
            arr[top]=x;
            cout<<x<<" pushed in stack"<<endl;
        }
    } 
    void pop(){
        if(top<0){
            cout<<"stack underflow"<<endl;
        }
        else{
            int x=arr[top]; //storing element to print it later
            top--;
            cout<<x<<" popped out"<<endl;
        }
    }
    int peek(){
        if(top<0){
            cout<<"stack underflow"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return (top<0); // will check if condition is true or false
    }
        
    void display(){
        if(top<0){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"stack elements:";
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


      

};

int main() {
    Stack s;
    s.push(10);
    s.push(30);
    s.push(60);
    s.pop();
    cout<<(s.isEmpty() ? "stack is empty" : "stack is not empty" )<<endl;
    cout<<"Current element is: "<<s.peek()<<endl;
    s.display();

    return 0;
}