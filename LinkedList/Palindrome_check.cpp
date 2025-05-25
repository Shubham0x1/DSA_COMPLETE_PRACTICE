#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x):data(x),next(NULL){}
};
//Insertion at end.
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
    temp->next= newNode;
}
//no need to printlist in this.
//function to check palindrome.
bool isPalindrome(Node* head){
    vector<int>vals;
    Node* temp=head;
    while(temp){
        vals.push_back(temp->data);
        temp=temp->next;
    }
    int start= 0;
    int end= vals.size()-1;
    while(start<end){
        if(vals[start]!= vals[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node* head= NULL;
        int val;
        while(cin>>val && val!=-1){
            insertAtEnd(head, val);
        }
        if(isPalindrome(head)){
            cout<< "true" << endl;
        }
        else{
            cout<< "false"<< endl;
        }
    }
    return 0;
}