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
