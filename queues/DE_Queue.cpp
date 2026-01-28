#include <bits/stdc++.h>
using namespace std;
# define N 5
int q[N];
int front=-1;
int rear=-1;
void push_front(int value){
    //queue is full
    if( (front==0 && rear==N-1)  ||  rear == (front-1)%(N-1) ){
        cout<<"queue is full"<<endl;
    }
    //push first element
    else if( front==-1 ){
        front=rear=0;
        q[front]=value;
    }
    //if front is at starting index and rear is not at last index
    else if( front==0 && rear!=N-1 ){
        front=N-1;
        q[front]=value;
    }
    else{
        front--;
        q[front]=value;
    }
}
void push_rear(int value){ // same as enqueue in circular queue
    //queue is full
    if( (front==0 && rear==N-1)  || (rear == (front-1)%(N-1) ) ){
        cout<<"Queue is full\n";
        return;
    }
    //empty queue
    else if(front==-1){
        front=rear=0;
        q[rear]=value;
    }
    //rear is at end and front is not at start
    else if(rear==N-1 && front!=0){
        rear=0;
        q[rear]=value; //to maintain cyclic nature
    }
    else{
        rear++;
        q[rear]=value;
    }
}
void pop_front(){
    //empty
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }
    //Queue has single element  
    else if(front==rear){
        front=rear=-1;
    }
    //front is at last element
    else if(front==N-1){
        front=0; //to maintain cyclic nature
    }
    else{
        front++;
    }
}
void pop_rear(){
    if(front==-1){//empty queue
        cout<<"Queue is empty"<<endl;
    }
    else if(front==rear){//single element 
        front=rear=-1;
    }
    else if(rear==0){// to maintain cyclic flow
        rear=N-1;
    }
    else{
        rear--;
    }

}
 void peek(){
    if(front==-1) cout<<"empty queue\n";
    else cout<<"front element: "<<q[front]<<endl;
}

int main() {
    // your code here

    return 0;
}