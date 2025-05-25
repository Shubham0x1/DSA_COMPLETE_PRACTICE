#include <iostream>
using namespace std;

// Definition for singly-linked list
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
    // Function to reverse a linked list
    Node* reverseNode(Node* temp){
        Node* prev = NULL;
        Node* curr = temp;
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Function to check whether the list is palindrome
    bool isPalindrome(Node *head) {
        if(head == NULL || head->next == NULL) return true;

        Node* slow = head;
        Node* fast = head;

        // Find the middle
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half of the list
        Node* temp = slow;
        Node* head1 = reverseNode(temp);

        // Compare both halves
        while(head1 != NULL){
            if(head1->data != head->data){
                return false;
            }
            head = head->next;
            head1 = head1->next;
        }

        return true;
    }
};

// Helper function to insert node at end
void append(Node* &head, int val){
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

// Helper function to print list
void printList(Node* head){
    while(head != NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    // Test case 1: Palindrome list
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 2);
    append(head, 1);

    cout << "Linked List: ";
    printList(head);

    Solution obj;
    if(obj.isPalindrome(head)){
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is NOT a palindrome." << endl;
    }

    return 0;
}
