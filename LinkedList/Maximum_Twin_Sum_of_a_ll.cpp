#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x):data(x),next(NULL){}
};
//Function to reverse a linked list
Node* reverseList(Node* head){
    Node* prev=NULL;
    while(head){
        Node* next = head->next;
        head->next= prev;
        prev=head;
        head= next;
    }
    return prev;
}
//Function to calculate the maximum twin sum.
int twinMaxSum(Node* head){
    //Step1: Find the middle node.
    Node* slow= head;
    Node* fast= head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //reverse the second half of the list.
    Node* secondhalf= reverseList(slow);
    //Calculate twin sums and track max.
    int maxSum=0;
    Node* firsthalf=head;
    while(secondhalf){
        int twinSum = firsthalf->data + secondhalf->data;
        maxSum= max(twinSum,maxSum);
        firsthalf=firsthalf->next;
        secondhalf=secondhalf->next;
    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    Node* tail=NULL;
    //Creating the linked list
    for(int i=0;i<n;i++){
        int val;
        cin>> val;
        Node* newNode =new Node(val);
        if(!head){
            head=newNode;
            tail=head;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
    }
    //get and print max twin sum.
    int result= twinMaxSum(head);
    cout<< result << endl;
    return 0;
}