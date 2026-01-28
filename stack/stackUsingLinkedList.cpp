#include <bits/stdc++.h>
using namespace std;
struct Node{
   int data;
    Node* next;
};

Node* top=NULL; // top is same as head

void push(int x){
    Node *newNode = new Node();
    newNode->data=x;
    newNode->next=top;
    top=newNode;
}
void display(){
    Node* temp = top;
    if(top==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
void peek(){
    if(top==NULL){
        cout<<"empty list"<<endl;
        return;
    }
    cout<<top->data<<endl;
}
void pop(){
    if(top==NULL){
        cout<<"empty list"<<endl;
        return;
    }
    Node *temp=top;
    top=top->next;
    delete temp;
}


int main() {
    push(2);
    push(3);
    push(10);
    display();
    peek();
    pop();
    peek();
 
    return 0;
}