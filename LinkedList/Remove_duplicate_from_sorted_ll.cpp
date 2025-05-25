#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {
        Node* temp = head;
        while (temp != NULL && temp->next != NULL) {
            if (temp->data == temp->next->data) {
                Node* duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};

// Utility function to insert a new node at the end
Node* insert(Node* head, int val) {
    Node* newNode = new Node(val);
    if (!head) return newNode;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Utility function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = NULL;

    // Creating a sorted linked list with duplicates: 1 -> 1 -> 2 -> 3 -> 3
    head = insert(head, 1);
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 3);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.removeDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}
