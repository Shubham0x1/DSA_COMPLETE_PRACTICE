#include <iostream>
using namespace std;

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
    int length(Node* head) {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }
        return count;
    }

    Node* intersectPoint(Node* head1, Node* head2) {
        int s1 = length(head1);
        int s2 = length(head2);
        Node* ptr1 = head1;
        Node* ptr2 = head2;
        int diff = s1 - s2;

        if (diff > 0) {
            while (diff--) ptr1 = ptr1->next;
        } else {
            while (diff++) ptr2 = ptr2->next;
        }

        while (ptr1 != NULL && ptr2 != NULL) {
            if (ptr1 == ptr2) return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};

// Utility function to print list from a given node
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create two linked lists:
    // List1: 10 -> 20 -> 30 \
    //                          -> 40 -> 50
    // List2:         15 -> 25 /
    Node* common = new Node(40);
    common->next = new Node(50);

    Node* head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30);
    head1->next->next->next = common;

    Node* head2 = new Node(15);
    head2->next = new Node(25);
    head2->next->next = common;

    Solution sol;
    Node* result = sol.intersectPoint(head1, head2);
    if (result != NULL)
        cout << "Intersection point data: " << result->data << endl;
    else
        cout << "No intersection point found." << endl;

    return 0;
}
