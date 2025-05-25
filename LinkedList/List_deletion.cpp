#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x):data(x),next(NULL){}
};
//printlist for printing the list elements.
void printList(Node* head){
    while(head){
        cout<< head->data << " ";
        head=head->next;
    }
    cout<< endl;
}
//insertion at beginning.
void insertAtBeg(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next=head;
    head=newNode;
}
//deletion at beginning.
void deletionAtBeg(Node* &head,int D){
    while(head && D--){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
}
int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    if(n<1 || n>1000){
        cout<<"Invalid";
        return 0;
    }
    for(int i=0;i<n;i++){
        int val;
        cin>> val;
        insertAtBeg(head,val);
    }
    int D;
    cin>> D;
    if(D<0 || D>=n){
        cout<< "Invalid";
        return 0;
    }
    printList(head);
    deletionAtBeg(head,D);
    printList(head);
    return 0;
}
