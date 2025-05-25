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
bool hasCycle(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}