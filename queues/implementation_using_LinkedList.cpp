#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next; 
};
Node* front=NULL;
Node* rear=NULL;
void enqueue(int value){
    Node * newNode= new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(front ==NULL && rear == NULL){//list is empty
       front = rear = newNode;
       return;
    }
    //else
    rear->next=newNode;
    rear=newNode;
}
void dequeue(){
    if(front==NULL && rear==NULL){
        cout<<"Empty Queue"<<endl;
        return;
    }
    Node* temp = front;
    cout<<"deleted value: "<<front->data<<endl;
    front=front->next;
    delete temp;
}
void peek(){
    if(front==NULL && rear==NULL){
        cout<<"Empty queue"<<endl;
        return;
    } 
    cout<<"The front element is: "<<front->data<<endl;
    
}
void display(){
    if(front==NULL && rear==NULL){
        cout<<"Empty queue"<<endl;
        return;
    }    
    Node* temp = front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    peek();
    dequeue();
    display();
   

    return 0;
}