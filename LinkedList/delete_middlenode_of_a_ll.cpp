#include <iostream>
#include <vector>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

class Solution {
  public:
    // Deletes the middle element from a vector
    vector<int> delemiddle(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (i != (n / 2)) {
                result.push_back(arr[i]);
            }
        }
        return result;
    }

    // Converts a vector to linked list
    Node* convertll(vector<int>& delemidd) {
        if (delemidd.empty()) return NULL;
        Node* head = new Node(delemidd[0]);
        Node* move = head;
        for (int i = 1; i < delemidd.size(); i++) {
            Node* temp = new Node(delemidd[i]);
            move->next = temp;
            move = temp;
        }
        return head;
    }

    // Deletes the middle node from a linked list
    Node* deleteMid(Node* head) {
        if (!head || !head->next) return NULL;
        Node* temp = head;
        vector<int> arr;

        // Convert linked list to array
        while (temp) {
            arr.push_back(temp->data);
            temp = temp->next;
        }

        // Remove middle element and rebuild linked list
        vector<int> delemidd = delemiddle(arr);
        return convertll(delemidd);
    }
};

// Utility function to insert a node at the end
void insert(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

// Utility function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function to test the deleteMid method
int main() {
    Node* head = NULL;

    // Sample input: 1->2->3->4->5
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    cout << "Original Linked List: ";
    printList(head);

    Solution sol;
    Node* updated = sol.deleteMid(head);

    cout << "After Deleting Middle Node: ";
    printList(updated);

    return 0;
}

//Better approach.
class Solution {
  public:
    Node* deleteMid(Node* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        Node* prev=NULL;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        prev->next=slow->next;
        delete slow;
        return head;
    }
};