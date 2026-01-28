#include <bits/stdc++.h>
using namespace std;
#define N 5
int q[N];
int front = -1;
int rear = -1;
void enqueue(int value){
    //if queue is full
    if(rear==N-1){
        cout<<"Overflow\n";
        return;
    }
    //if queue is empty
    if(front==-1 && rear==-1){
        front=rear=0;
        q[rear]=value;
        return;
    }
    //queue is neither empty nor full
        rear++;
        q[rear]=value;
}
void dequeue(){
    //queue is empty
    if(front==-1 && rear==-1){
        cout<<"underflow\n";
        return;
    }
    //when there is only one element in the queue i.e., front == rear
    if(front==rear){
        front=rear=-1;
        return;
    }
    //else (normal case)
    cout<<"deleted element is "<<q[front]<<endl;
    front++;
}
void peek(){// to display the element at front
    //if queue is empty
    if(front==-1 || front>rear){
        cout<<"queue is empty\n";
        return;
    }
    //else
    cout<<"front element: "<<q[front]<<endl;
    
}
void display(){
    //if queue is empty
    if(front==-1 || front>rear){
        cout<<"queue is empty";
        return;
    }
    //else
    for(int i=front;i<=rear;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;

}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    
    display();
    dequeue();
   
    peek();
    display();

    return 0;
}