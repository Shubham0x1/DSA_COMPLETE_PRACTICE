#include <iostream>
using namespace std;

// Definition of Node
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

// Your segregate solution
class Solution {
public:
    Node* segregate(Node* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        Node* zeroHead = new Node(-1);
        Node* oneHead = new Node(-1);
        Node* twoHead = new Node(-1);

        Node* zero = zeroHead;
        Node* one = oneHead;
        Node* two = twoHead;
        Node* temp = head;

        while (temp) {
            if (temp->data == 0) {
                zero->next = temp;
                zero = temp;
            } else if (temp->data == 1) {
                one->next = temp;
                one = temp;
            } else {
                two->next = temp;
                two = temp;
            }
            temp = temp->next;
        }

        // Connecting three lists
        zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
        one->next = twoHead->next;
        two->next = NULL;

        Node* newHead = zeroHead->next;

        // Free dummy nodes
        delete zeroHead;
        delete oneHead;
        delete twoHead;

        return newHead;
    }
};

// Utility to insert a new node at end
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Utility to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = NULL;
    // Sample input: 1 -> 2 -> 0 -> 1 -> 2 -> 0
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 0);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 0);

    cout << "Original list: ";
    printList(head);

    Solution obj;
    Node* result = obj.segregate(head);

    cout << "Sorted list:   ";
    printList(result);

    return 0;
}
