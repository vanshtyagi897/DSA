#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* prev;
    Node* next;
    
        Node(int d){
            value=d;
            prev=NULL;
            next=NULL;
        }
};
void forwardTraverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->value<<"-->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
void backwardTraverse(Node* head){
    Node* temp = head;
    while(temp->next){
        temp=temp->next;
    } 
    while(temp){
        cout<<temp->value<<"-->";
        temp=temp->prev;
    }cout<<"NULL"<<endl;
}
void insertAtStart(Node* &head, int value){
    Node* newNode= new Node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;

}
void insertAtEnd(Node* &head, int value){
    Node* newNode= new Node(4);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newNode->prev=temp;
    temp->next=newNode;
}
void insertAtMiddle(Node* &head, int k, int value){
    Node* newNode= new Node(value);
    if(k==1){
        insertAtStart(head,value);
        return;
    }
    Node* temp= head;
    for(int i=1;i<k-1;i++){
        temp=temp->next;
    }
    if(temp->next){
        temp->next->prev=newNode;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    temp->next=newNode;
}
void deleteAtStart(Node* &head){
    if(head=NULL){
        cout<<"NO linked list exist"<<endl;
    }
    if(head->next==NULL){
        free(head);
        return;
    }
    Node* temp= head;
    head=head->next;
    head->prev=NULL;
    free(temp);

}
void deleteAtEnd(Node* &head){
    if(head->next==NULL){
        free(head);
        return;
    }
    Node* temp = head;
    while(temp->next){
        temp=temp->next;
    }
    Node* newLastNode = temp->prev;
    newLastNode->next=NULL;
    free(temp);
}
void deleteAtMiddle(Node* &head,int k){
    Node*temp=head;
    for(int i=1;i<k-1;i++){
        temp=temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next=deleteNode->next;
    if(deleteNode->next){
        deleteNode->next->prev=temp;
    }
    free(deleteNode);
}


int main() {
    Node* n1= new Node(1);
    Node* n2 = new Node(2);
    n1->next=n2;
    n2->prev=n1;
    Node* head = n1;
    forwardTraverse(head);
    backwardTraverse(head);
    insertAtStart(head,3);
    forwardTraverse(head);
    insertAtEnd(head,4);
    forwardTraverse(head);
    insertAtMiddle(head,2,5);
    forwardTraverse(head);
    deleteAtStart(head);
    forwardTraverse(head);
    deleteAtEnd(head);
    forwardTraverse(head);
    deleteAtMiddle(head,2);
    forwardTraverse(head);


    

    return 0;
}