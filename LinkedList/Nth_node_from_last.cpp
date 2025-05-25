#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        Node* temp = head;
        int len = 0;

        // Count length of the linked list
        while (temp) {
            len++;
            temp = temp->next;
        }

        // If k is more than length, return -1
        if (k > len) {
            return -1;
        }

        // Traverse to the (len-k)th node from the start
        Node* curr = head;
        for (int i = 0; i < (len - k); i++) {
            curr = curr->next;
        }

        return curr->data;
    }
};

// Function to insert a node at the end
void insert(Node* &head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    Node* head = NULL;

    // Create a linked list: 10 -> 20 -> 30 -> 40 -> 50
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);

    Solution sol;
    int k = 2; // Change k as needed
    int result = sol.getKthFromLast(head, k);

    if (result != -1)
        cout << "The " << k << "th node from the end is: " << result << endl;
    else
        cout << "Invalid k (greater than length of list)" << endl;

    return 0;
}
