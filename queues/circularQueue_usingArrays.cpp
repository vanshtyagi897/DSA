#include <bits/stdc++.h>
using namespace std;
#define N 5
int q[N];
int front = -1;
int rear = -1;
void enqueue(int value){
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
void dequeue(){
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
 void peek(){
    if(front==-1) cout<<"empty queue\n";
    else cout<<"front element: "<<q[front]<<endl;
}
void display(){
     if (front == -1) {
        cout << "empty queue\n";
        return;
    }
    int i = front;
    while (true) {
        cout << q[i] << " ";
        if (i == rear) break;   // stop after printing last element
        i = (i + 1) % N;        // wrap around
    }
    cout << endl;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    peek();
    dequeue();
    enqueue(5);
    display();
    return 0;
}