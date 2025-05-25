#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

class Solution {
  public:
    vector<Node*> mergeList(Node* head1, Node* head2) {
        Node* curr1 = head1;
        Node* curr2 = head2;

        while (curr1 != NULL && curr2 != NULL) {
            Node* next1 = curr1->next;
            Node* next2 = curr2->next;

            // Insert curr2 after curr1
            curr1->next = curr2;
            curr2->next = next1;

            // Move to next
            curr1 = next1;
            curr2 = next2;
        }

        // Update head2 to remaining part of list2
        head2 = curr2;

        return {head1, head2};
    }
};

// Helper function to insert at end
Node* insertNode(Node* head, int val) {
    if (!head) return new Node(val);
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(val);
    return head;
}

// Helper function to print a list
void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}

// Main function to test
int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    // Sample input: List1 = 10->9
    head1 = insertNode(head1, 10);
    head1 = insertNode(head1, 9);

    // Sample input: List2 = 6->1->2->3->4->5
    int arr2[] = {6, 1, 2, 3, 4, 5};
    for (int i = 0; i < 6; i++) {
        head2 = insertNode(head2, arr2[i]);
    }

    Solution sol;
    vector<Node*> result = sol.mergeList(head1, head2);

    cout << "Modified LinkedList1: ";
    printList(result[0]);

    cout << "Modified LinkedList2: ";
    printList(result[1]);

    return 0;
}
