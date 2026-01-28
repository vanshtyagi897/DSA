#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;  //value in node
    Node* next; //next is a pointer to node
    
    Node(int data){//constructor used for initialization
        val=data;
        next=NULL;

    }
}; 
//we don't pass Head by refrence in traverse() function 
//beacuse we are just traversing L.L
// and not making any changes to the L.L
void traverse(Node* Head){
    Node* temp=Head;
     while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
//we'll pass Head by refence here because we are 
//making changes in L.L
void insertAtBeginning(Node* &Head, int val){
    Node* newNode = new Node(val);//declared new node
    newNode->next=Head;//next of newnode points to Head
    Head=newNode;//now newNode is a new Head
}

void insertAtEnd(Node* &Head, int val){
    if(Head==NULL) {
        insertAtBeginning(Head,val);
        return;
    }
    Node* newNode = new Node(val);
    Node* temp = Head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //now we are at the end of L.L, now , insert val at end
    temp->next=newNode;
    //no need to do:newNode->next=NULL; 
    //this conditon is already present in constructor 
}
void insertAtMiddle(Node* &Head,  int val, int pos){
if(pos==1){
    insertAtBeginning(Head,val);
    return;
}
Node* newNode = new Node(val);
Node* prev = Head;
int count=1;
while(count < (pos - 1)){
    prev=prev->next;
    count++;

}
newNode->next=prev->next;
prev->next=newNode;


}
void deleteAtHead(Node* &Head){
    if(Head==NULL){
        return;
    }
    Node* temp= Head;
    Head=Head->next;
    free(temp);
}
void deleteAtEnd(Node* &Head){
    if(Head==NULL){
        return;
    }
    else if(Head->next==NULL){//first node is last node
        deleteAtHead(Head);
        return;
    }
    //find second last node
    Node* secondLastNode=Head;//secondLastNode is same as temp
    while(secondLastNode->next->next!=NULL){
        secondLastNode=secondLastNode->next;
    }
    Node* lastNode = secondLastNode->next;
    secondLastNode->next=NULL;
    free(lastNode);

}
void deleteAtMiddle(Node* Head, int pos){
    if(pos==1){
        deleteAtHead(Head);
    }
    Node* prev=Head;
    int count=1;
    while (count<(pos-1)){
        prev=prev->next;
        count++;
    }
    Node* curr=prev->next;//node to be deleted
    prev->next=curr->next;
    free(curr);

}
void updateNodeValue(Node* &Head, int k,int updated_value){//k is the positon
    if(k==1){
        Head->val=updated_value;
    }
    Node* temp=Head;
    int count=1;
    while(count<k){
        temp=temp->next;
        count++;
    }
    temp->val=updated_value;

}
void deleteAlternateNode(Node* &Head){
    Node* temp=Head;
    while(temp!=NULL && temp->next!=NULL){
        Node* deleteNode = temp->next;
        temp->next=temp->next->next;
        temp=temp->next;
        free(deleteNode);
    }
}
int findMiddle(Node* &Head){// slow and fast pointer concept
    Node* slow=Head;
    Node* fast= Head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //now slow is at middle;
    return slow->val ;
}

int main() {
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    node1->next=node2;
    
    
    
    Node* Head= node1;
    traverse(Head);
    insertAtBeginning(Head,3);
    traverse(Head);
    insertAtEnd(Head,4);
    traverse(Head);
    insertAtEnd(Head,6);
    insertAtEnd(Head,7);
    insertAtEnd(Head,8);
    insertAtMiddle(Head,5,3);
    traverse(Head);
    deleteAtHead(Head);
    traverse(Head);
    deleteAtEnd(Head);
    traverse(Head);
    deleteAtMiddle(Head,2);
    traverse(Head);
    updateNodeValue(Head,1,0);
    traverse(Head);
    deleteAlternateNode(Head);
    traverse(Head);
    cout<<"Middle Node:"<<findMiddle(Head);
    
    
    

    return 0;
}