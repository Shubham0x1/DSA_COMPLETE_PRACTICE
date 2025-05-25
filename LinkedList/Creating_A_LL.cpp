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
void insertAtStart(Node*&head, int val){
    Node* newNode = new Node(val);
    newNode->next=head;
    head=newNode;
}
void insertAtSpec(Node* &head, int val,int pos){
    Node* newNode = new Node(val);
    if(pos==1){
        newNode->next=head;
        head=newNode;
    }
    Node* temp=head;
    int count=1;
    while(temp!=nullptr && count< pos-1){
        temp=temp->next;
        count++;
    }
    if (temp == nullptr) {
        cout << "Position out of bounds." << endl;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void deleteAtStart(Node* &head){
    Node* temp =head;
    head=head->next;
    delete(temp);
}
void deleteAtEnd(Node* &head){
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    if(head->next==nullptr){
        delete(head);
        head=nullptr;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}
void deleteAtSpecific(Node* &head, int pos){
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete(temp);
        return;
    }
    Node*temp=head;
    int count=1;
    while(temp!=nullptr && count< pos-1){
        temp=temp->next;
        count++;
    }
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of bounds." << endl;
        return;
    }
    Node* delNode=temp->next;
    temp->next= delNode->next;
    delete(delNode);
}
int main() {
    Node* head = nullptr;

    insertAtend(head, 10);
    insertAtend(head, 20);
    insertAtend(head, 30);

    printlist(head);  // Output: 10 -> 20 -> 30 -> NULL
    insertAtStart(head,90);
    printlist(head);  
    insertAtSpec(head,89,3);
    printlist(head);
    deleteAtStart(head);
    printlist(head);
    deleteAtEnd(head);
    printlist(head);
    deleteAtSpecific(head,2);
    printlist(head);
    return 0;
}
