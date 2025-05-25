#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
void insertAtend(Node* & head, int val){
    Node* newNode= new Node(val);
    if(head==nullptr){
        head= newNode;
        return;
    }
    Node* temp=head;
    while(temp->next != nullptr){
        temp= temp->next;
    }
    temp->next= newNode;
}
void printlist(Node*& head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<< temp->data << " -> ";
        temp=temp->next;
    }
    cout<< "NULL" << endl;
}
Node* reverseList(Node* &head){
    Node*prev=nullptr;
    Node*curr=head;
    while(curr!=nullptr){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main() {
    Node* head = nullptr;

    insertAtend(head, 10);
    insertAtend(head, 20);
    insertAtend(head, 30);
    printlist(head);  // Output: 10 -> 20 -> 30 -> NULL
    head= reverseList(head);
    printlist(head);    
}