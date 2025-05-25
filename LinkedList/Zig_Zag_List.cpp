#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x):data(x),next(NULL){}
};
//insertion at end
void insertionAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    if(!head){
        head= newNode;
        return;
    }
    Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newNode;
}
//print list
void printList(Node* head){
    while(head){
        cout<< head->data << " ";
        head=head->next;
    }
    cout<< endl;
}
void rearrange(Node* head){
    bool shouldBeLess= true;
    Node* curr=head;
    while(curr && curr->next){
        if(shouldBeLess){
            if(curr->data > curr->next->data){
                swap(curr->data, curr->next->data);
            }
        }
        else{
            if(curr->data < curr->next->data){
                swap(curr->data, curr->next->data);
            }
        }
        curr=curr->next;
        shouldBeLess=!shouldBeLess;
    }
}
int main(){
    int n;
    cin>>n;
    int val;
    Node* head=NULL;
    for(int i=0;i<n;i++){
        cin>> val;
        insertionAtEnd(head,val);
    }
    rearrange(head);
    printList(head);
    return 0;
}