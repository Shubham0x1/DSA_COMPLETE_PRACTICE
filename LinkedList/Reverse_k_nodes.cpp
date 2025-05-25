#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x):data(x),next(NULL){}
};
void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    if(!head){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newNode;
}
void printList(Node* head){
    while(head!=NULL){
        cout<< head->data << " ";
        head=head->next;
    }
    cout<< endl;
}
Node* reversekNode(Node* head,int k){
    Node* current=head;
    Node* prev=NULL;
    Node* next=NULL;
    int count=0;
    //reverse first k nodes.
    while(current!=NULL && count<k){
        next=current->next;
        current->next =prev;
        prev= current;
        current= next;
        count++;
    }
    //Step3: Recurse for the remaining list.
    if(next!=NULL){
        head->next = reversekNode(next,k);
    }
    //Step4: prev is the new head after reversal.
    return prev;
}
int main(){
    Node* head=NULL;
    int val;
    //Read value until -1.
    while(cin>> val && val!=-1){
        insertAtEnd(head,val);
    }
    int k;
    cin>>k;
    head= reversekNode(head,k);
    printList(head);
    return 0;
}