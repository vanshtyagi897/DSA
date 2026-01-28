#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtEnd(Node* &head, int value){
    Node * newNode = new Node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void traverse(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL\n";
}
//are two Lists equal?
bool equalOrNot(Node* head1, Node*head2){
    while(head1 && head2){
        if(head1->data!=head2->data){
        return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return (head1==NULL && head2==NULL );  //return 0 if false and 1 if true
}
//reverse a linked list
void reverseLL(Node* &head){
    Node* prevNode = NULL;
    Node* currNode = head;
    Node* nextNode = head;
    while(currNode!=NULL){
        nextNode=currNode->next;
        currNode->next= prevNode;
        prevNode=currNode;
        currNode=nextNode;
    }
    head=prevNode;
}

int main() {
    Node* head1 = NULL;
    insertAtEnd(head1,1);
    insertAtEnd(head1,2);
    insertAtEnd(head1,3);
    traverse(head1);

    Node* head2=NULL;
    insertAtEnd(head2,1);
    insertAtEnd(head2,2);
    insertAtEnd(head2,3);
    traverse(head2);

    cout<<"Both lists are equal:"<<equalOrNot(head1,head2)<<endl;

    reverseLL(head1);
    traverse(head1);

    

    return 0;
}