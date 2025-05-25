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
vector<int> lltoArray(Node* head){
    vector<int>result;
    while(head){
        result.push_back(head->data);
        head=head->next;
    }
    return result; //gives ll into array.
}
//remove every kth element 1-based indexing.
vector<int>removeeverykNode(vector<int>& arr, int k){
    vector<int>result;
    for(int i=0;i<arr.size();i++){
        if((i+1)%k !=0){ //condition to remove every kth element.
            result.push_back(arr[i]);
        }
    }
    return result;
}
Node* arraytoLL(const vector<int>& arr){
    Node* head=NULL;
    Node* tail=NULL;
    for(int val:arr){
        Node* newNode = new Node(val);
        if(!head){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    return head;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    Node* head=NULL;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insertionAtEnd(head,val);
    }
    //Step1: ll to array.
    vector<int>arr= lltoArray(head);
    //Step2: to modify array to take only value which needed in answer.
    vector<int>modifiedarr= removeeverykNode(arr,k);
    //Step3- array to ll.
    Node* newhead= arraytoLL(modifiedarr);
    printlist(newhead);
    return 0;
}
// Better pointer approach.
// Node* deleteK(Node* head, int k) {
//     if(k==0 || head==NULL) return head;
//     if(k==1) return NULL;
//     Node* curr=head;
//     Node* prev=NULL;
//     int count=1;
//     while(curr){
//         if(count%k==0){
//             prev->next=curr->next;
//             delete curr;
//             curr= prev->next;
//         }
//         else{
//             prev=curr;
//             curr=curr->next;
//         }
//         count++;
//     }
//     return head;
// }