#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* bottom;
    Node(int x){
        data=x;
        next=nullptr;
        bottom=nullptr;
    }
};
Node* Merge(Node* a, Node* b){
    if(!a) return b;
    if(!b)return a;
    Node* result;
    if(a->data < b->data){
        result=a;
        result->bottom=Merge(a->bottom,b);
    }
    else{
        result=b;
        result->bottom=Merge(a,b->bottom);
    }
    return result;
}
Node* flatten(Node* root){
    if(!root || !root->next) return root;
    root->next= flatten(root->next);
    root=Merge(root,root->next);
    root->next=nullptr;
    return root;
}
void printList(Node* node){
    while(node){
        cout<< node->data <<" ";
        node=node->bottom;
    }
    cout<< endl;
}
int main() {
    // Creating all nodes
    Node* head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    head->next = new Node(10);
    head->next->bottom = new Node(20);

    head->next->next = new Node(19);
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    head->next->next->next = new Node(28);
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom->bottom = new Node(40);
    head->next->next->next->bottom->bottom->bottom = new Node(45);

    // Flatten the list
    Node* flatHead = flatten(head);

    // Print the flattened list
    cout << "Flattened list is:\n";
    printList(flatHead);

    return 0;
}
