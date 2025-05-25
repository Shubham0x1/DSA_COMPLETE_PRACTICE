#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x):data(x),next(NULL){}
};
//inserting at the end.
void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    if(!head){
        head= newNode;
        return;
    }
    Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next= newNode;
}
//printlist to print answer.
void printList(Node* head){
    while(head){
        cout<< head->data << " ";
        head=head->next;
    }
    cout<< endl;
}
//Function to reverse a linked list.
Node* reverseLL(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr){
        Node* nextnode= curr->next;
        curr->next= prev;
        prev= curr;
        curr=nextnode;
    }
    return prev;
}
int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    if(n<1 || n>1000){
        cout<< "Invalid";
        return 0;
    }
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insertAtEnd(head,val);
    }
    Node* reverse= reverseLL(head);
    printList(reverse);
    return 0;
}