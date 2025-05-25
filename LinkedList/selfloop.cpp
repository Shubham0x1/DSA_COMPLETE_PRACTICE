#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x): data(x),next(NULL){}
};
//Flyod tortoise method.
bool hasloop(Node* head){
    Node* slow=head;
    Node* fast= head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    int loopPos;
    cin>>n;
    if(n<1 || n>10){
        cout<< "Invalid";
        return 0;
    }
    vector<Node*> nodes;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        nodes.push_back(new Node(val));
        if(i>0){
            nodes[i-1]->next= nodes[i];
        }
    }
    cin>> loopPos;
    if(loopPos <0 || loopPos>n){
        cout<< "Invalid";
        return 0;
    }
    if(loopPos!=0){
        nodes[n-1]->next= nodes[loopPos -1];
    }
    cout<< (hasloop(nodes[0])? "True":"False");
    return 0;
}