#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertionAtEnd(Node* &head,int val){
    Node* newNode = new Node(val);
    if(!head){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next= newNode;
}
void printlist(Node* head){
    while(head){
        cout<< head->data << " ";
        head=head->next;
    }
    cout<<endl;
}
int getMiddle(Node* head) {
    if(head==NULL) return -1;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insertionAtEnd(head,val);
    }
    cout<< getMiddle(head);
    return 0;
}