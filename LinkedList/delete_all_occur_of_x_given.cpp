#include <iostream>
using namespace std;

// Node definition
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to delete all occurrences of x in the linked list
Node* deleteAllOccurances(Node* head, int x) {
    Node* dummyNode = new Node(-1);  // Dummy node to ease edge cases
    Node* temp = dummyNode;

    while(head != NULL){
        if(head->data != x){
            temp->next = new Node(head->data);
            temp = temp->next;  // Move the pointer forward
        }
        head = head->next;
    }

    Node* ans = dummyNode->next;
    delete dummyNode;  // Free dummy node memory
    return ans;
}

// Helper function to append a node at the end
void append(Node*& head, int val){
    if(head == NULL){
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new Node(val);
}

// Function to print the linked list
void printList(Node* head){
    while(head != NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Main function to test
int main() {
    Node* head = NULL;

    // Creating the linked list: 1 -> 2 -> 3 -> 2 -> 4
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 2);
    append(head, 4);

    cout << "Original list: ";
    printList(head);

    int x = 4;
    Node* updatedHead = deleteAllOccurances(head, x);

    cout << "List after deleting " << x << ": ";
    printList(updatedHead);

    return 0;
}
