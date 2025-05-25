#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
}
void insertionAtEnd(Node* &head, int val){
    Node* newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->next){
        temp=temp->next;
    }

}