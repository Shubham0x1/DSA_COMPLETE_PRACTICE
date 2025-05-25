#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x):data(x),next(NULL){}
};
//insertion at end.
void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    if(!head){
        head=newNode;
        return;
    }
    Node* temp= head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newNode;
}
//print the list.
void printList(Node* head){
    while(head){
        cout<< head->data << " ";
        head=head->next;
    }
    cout<< endl;
}
Node* removeduplicates(Node* head){
    Node* current=head;
    while(current && current->next){
        if(current->data == current->next->data){
            Node* dup= current->next;
            current->next= current->next->next;
            delete dup;
        }
        else{
            current=current->next;
        }
    }
    return head;
}
int main(){
    Node* head=NULL;
    int val;
    while(cin>> val && val!=-1){
        insertAtEnd(head,val);
    }
    head = removeduplicates(head);
    printList(head);
    return 0;
}