#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x):data(x),next(NULL){}
};
//insert at end
void insertAtEnd(Node* &head,int val){
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
//print function.
void printList(Node* head){
    while(head){
        cout<< head->data << " ";
        head=head->next;
    }
    cout<< endl;
}
Node* mergeList(Node* head1, Node* head2){
    Node* dummynode= new Node(0);
    Node* tail= dummynode;
    while(head1 && head2){
        if(head1->data <= head2->data){
            tail->next = new Node(head1->data);
            head1=head1->next;
        }
        else{
            tail->next = new Node(head2->data);
            head2=head2->next;
        }
        tail=tail->next;
    }
    while(head1){
        tail->next = new Node(head1->data);
        tail=tail->next;
        head1=head1->next;
    }
    while(head2){
        tail->next= new Node(head2->data);
        tail=tail->next;
        head2=head2->next;
    }
    Node* result= dummynode->next;
    delete dummynode;
    return result;
}
int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>> n2;
    Node* head1= NULL;
    Node* head2= NULL;
    for(int i=0;i<n1;i++){
        int val;
        cin>>val;
        insertAtEnd(head1, val);
    }
    for(int i=0;i<n2;i++){
        int val;
        cin>>val;
        insertAtEnd(head2, val);
    }
    Node* mergedHead = mergeList(head1, head2);
    printList(mergedHead);
    return 0;
}