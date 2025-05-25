#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

// Define the doubly linked list node
struct DLLNode {
    int data;
    DLLNode* prev;
    DLLNode* next;

    DLLNode(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Function to insert a node at the end
DLLNode* insertAtEnd(DLLNode* head, int val) {
    DLLNode* newNode = new DLLNode(val);
    if (head == NULL)
        return newNode;

    DLLNode* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

// Function to print the doubly linked list
void printDLL(DLLNode* head) {
    DLLNode* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to reverse DLL using an array
DLLNode* reverseDLL(DLLNode* head) {
    if (head == NULL || head->next == NULL) return head;

    DLLNode* temp = head;
    vector<int> arr;

    // Store data in vector
    while (temp != NULL) {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    // Reverse the array
    reverse(arr.begin(), arr.end());

    // Reassign values to nodes
    temp = head;
    int i = 0;
    while (temp != NULL) {
        temp->data = arr[i++];
        temp = temp->next;
    }

    return head;
}

// Main function
int main() {
    DLLNode* head = NULL;

    // Create DLL: 10 <-> 20 <-> 30 <-> 40 <-> 50
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);

    cout << "Original DLL: ";
    printDLL(head);

    head = reverseDLL(head);

    cout << "Reversed DLL (using array): ";
    printDLL(head);

    return 0;
}
//using array approach.
//better approach is pointer..moving..doubly linked list is easy to implement as it have both prev and next/\.
// DLLNode* reverseDLL(DLLNode* head) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         DLLNode* curr=head;
//         DLLNode* temp=NULL;
//         while(curr){
//             temp=curr->prev;
//             curr->prev=curr->next;
//             curr->next=temp;
//             curr=curr->prev;
//         }
//         if(temp!=NULL){
//             head=temp->prev;
//         }
//         return head;
// }