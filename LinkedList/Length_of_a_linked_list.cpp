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
int lengthofll(Node* head){
    int count=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        count++;
    }
    return count;
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
    cout<< lengthofll(head);
    return 0;
}