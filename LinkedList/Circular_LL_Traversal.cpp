#include<bits/stdc++.h>
using namespace std;
// void printList(Node* head){
//     Node* temp=head;
//     do{
//         cout<< head->data <<" ";
//         temp=temp->next;
//     }while(temp!=head);
// }

//We use this looping method we know whenever head again meets head, then that is the bas]]
//of this function first iteration is must..after than till head does not match with head
//again.

//Check if circular linked list.
// if(head==NULL) return true;
// Node * temp=head->next;
// while(temp!=NULL && temp!=heaad){
//     temp=temp->next;
// }
// return temp==head;

//this is the logic to check if it is a circular ll.
//we only check if last node is pointing to first node or not and return answer.