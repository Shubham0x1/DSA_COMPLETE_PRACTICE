#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int x): val(x),next(nullptr){}
};
Node* createList(const vector<int>& arr){
    Node* dummy= new Node(0);
    Node* curr=dummy;
    for(int val:arr){
        curr->next=new Node(val);
        curr=curr->next;
    }
    return dummy->next;
}
int getLength(Node* head){
    int len=0;
    while(head){
        len++;
        head=head->next;
    }
    return len;
}
Node* getNodeAt(Node* head, int index){
    int count=0;
    while(head && count<index){
        head=head->next;
        count++;
    }
    return head;
}
void printMiddleOut(Node* head, int left,int right, int len){
    if(left<0 && right>=len)return;
    if(left>=0){
        cout<< getNodeAt(head,left)->val << " ";
    }
    if(right<len){
        cout<< getNodeAt(head,right)->val << " ";
    }
    printMiddleOut(head, left-1, right+1, len);
}
int main(){
    int n;
    cin>>n;
    vector<int>values(n);
    for(int i=0;i<n;i++){
        cin>> values[i];
    }
    Node* head= createList(values);
    int len= getLength(head);
    int leftmid= (len-1)/2;
    int rightmid= len/2;
    if(len%2==1){
        cout<< getNodeAt(head, leftmid)->val << " ";
        printMiddleOut(head,leftmid-1,leftmid+1,len);
    }
    else{
        cout<< getNodeAt(head,leftmid)->val << " ";
        cout<< getNodeAt(head, rightmid)->val << " ";
        printMiddleOut(head, leftmid-1,rightmid+1,len);
    }
    return 0;
}