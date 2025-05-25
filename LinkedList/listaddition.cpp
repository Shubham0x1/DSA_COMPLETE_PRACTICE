#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x): data(x),next(NULL){}
};
//insertion at end.
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
//printlist.
void printList(Node* head){
    while(head){
        cout<< head->data << " ";
        head=head->next;
    }
    cout<< endl;
}
//add function.
Node* addTwoLists(Node* head1, Node* head2){
    Node* dummyNode= new Node(0);
    Node* curr= dummyNode;
    int carry=0;
    while(head1 || head2|| carry){
        int sum=carry;
        if(head1){
            sum=sum+head1->data;
            head1=head1->next;
        }
        if(head2){
            sum=sum+head2->data;
            head2=head2->next;
        }
        carry= sum/10;
        curr->next = new Node(sum%10);
        curr=curr->next;
    }
    return dummyNode->next;
    return 0;
}
int main(){
    int n;
    cin>> n;
    int m;
    cin>>m;
    Node* head1=NULL;
    Node* head2=NULL;
    for(int i=0;i<n;i++){
        int val;
        cin>> val;
        insertionAtEnd(head1,val);
    }
    for(int i=0;i<m;i++){
        int val;
        cin>> val;
        insertionAtEnd(head2,val);
    }
    Node* result= addTwoLists(head1,head2);
    printList(result);
    return 0;
}