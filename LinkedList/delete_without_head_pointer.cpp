#include <iostream>
using namespace std;

// Definition of singly linked list node
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
    // Function to delete a node without any reference to the head pointer.
    void deleteNode(Node* del_node) {
        if (del_node == NULL || del_node->next == NULL) return;
        Node* temp = del_node->next;
        del_node->data = temp->data;
        del_node->next = temp->next;
        delete temp;
    }
};

// Utility function to print a linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function to demonstrate deletion without head
int main() {
    // Creating the list: 10 -> 20 -> 4 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(4);
    head->next->next->next = new Node(30);

    cout << "Original list: ";
    printList(head);

    Solution obj;
    
    // Let's say we want to delete node 20, but we only have pointer to that node
    Node* nodeToDelete = head->next; // points to node with value 20
    obj.deleteNode(nodeToDelete);

    cout << "List after deletion: ";
    printList(head);

    return 0;
}
