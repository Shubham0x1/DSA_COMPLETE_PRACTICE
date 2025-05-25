#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

// Solution class
class Solution {
  public:
    Node* linkdelete(Node* head, int m, int n) {
        Node* curr = head;
        while (curr) {
            // Skip M nodes
            for (int i = 1; i < m && curr != NULL; i++) {
                curr = curr->next;
            }

            if (curr == NULL) break;

            // Delete next N nodes
            Node* temp = curr->next;
            for (int i = 1; i <= n && temp != NULL; i++) {
                Node* to_delete = temp;
                temp = temp->next;
                delete to_delete;
            }

            // Link Mth node to the (M+N+1)th node
            curr->next = temp;

            // Move to next M group
            curr = temp;
        }
        return head;
    }
};

// Helper function to insert node at end
Node* insertNode(Node* head, int data) {
    if (!head) return new Node(data);
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = new Node(data);
    return head;
}

// Helper function to print linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = NULL;
    int n;
    cout << "Enter number of elements in linked list: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        head = insertNode(head, val);
    }

    int M, N;
    cout << "Enter M (nodes to skip): ";
    cin >> M;
    cout << "Enter N (nodes to delete): ";
    cin >> N;

    Solution sol;
    head = sol.linkdelete(head, M, N);

    cout << "Updated Linked List:\n";
    printList(head);

    return 0;
}
