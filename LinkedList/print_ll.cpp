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
int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insertionAtEnd(head,val);
    }
    printlist(head);
    return 0;
}