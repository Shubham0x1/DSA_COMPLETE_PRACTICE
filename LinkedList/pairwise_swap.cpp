#include <iostream>
#include <vector> // <-- Required for std::vector
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Solution class with pairWiseSwap function
class Solution {
  public:
    Node* pairWiseSwap(Node* head) {
        if (head == NULL || head->next == NULL) return head;

        Node* prev = NULL;
        Node* curr = head;
        head = head->next; // new head after first pair swap

        while (curr != NULL && curr->next != NULL) {
            Node* next = curr->next;
            Node* nextpair = next->next;

            // Swapping links
            next->next = curr;
            curr->next = nextpair;

            // Linking previous pair to current
            if (prev != NULL) {
                prev->next = next;
            }

            // Update pointers
            prev = curr;
            curr = nextpair;
        }
        return head;
    }
};

// Function to create a linked list from vector
Node* createList(const vector<int>& vals) {
    if (vals.empty()) return NULL;
    Node* head = new Node(vals[0]);
    Node* curr = head;
    for (int i = 1; i < vals.size(); ++i) {
        curr->next = new Node(vals[i]);
        curr = curr->next;
    }
    return head;
}

// Function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    vector<int> input = {1, 2, 2, 4, 5, 6, 7, 8};
    Node* head = createList(input);

    Solution sol;
    head = sol.pairWiseSwap(head);

    printList(head);  // Expected Output: 2 1 4 2 6 5 8 7

    return 0;
}
