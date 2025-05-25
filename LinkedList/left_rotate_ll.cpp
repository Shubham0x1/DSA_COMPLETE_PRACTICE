#include <iostream>
#include <vector>
#include <algorithm> // for reverse
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

class Solution {
public:
    // Left rotate array by k
    vector<int> rotateknode(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n; // Handle k >= n
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        reverse(arr.begin(), arr.end());
        return arr;
    }

    // Convert array back to linked list
    Node* converttoLL(vector<int>& kthrotate) {
        Node* head = new Node(kthrotate[0]);
        Node* move = head;
        for (int i = 1; i < kthrotate.size(); i++) {
            Node* temp = new Node(kthrotate[i]);
            move->next = temp;
            move = temp;
        }
        return head;
    }

    // Rotate the linked list to the left by k
    Node* rotate(Node* head, int k) {
        if (!head || !head->next) return head;
        Node* temp = head;
        vector<int> arr;
        while (temp != NULL) {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        vector<int> kthrotate = rotateknode(arr, k);
        return converttoLL(kthrotate);
    }
};

// Utility function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    // Creating the linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;

    Solution obj;
    cout << "Original List: ";
    printList(head);

    Node* newHead = obj.rotate(head, k);

    cout << "Left Rotated List by " << k << ": ";
    printList(newHead);

    return 0;
}

//Better approach.
class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        int len=1;
        Node* temp=head;
        while(temp->next !=NULL){
            len++;
            temp=temp->next;
        }
        k=k%len;
        if(k==0) return head;
        Node* curr= head;
        for(int i=1;i<k;i++){
            curr=curr->next;
        }
        Node* newhead=curr->next;
        curr->next=NULL;
        Node* tail= newhead;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next= head;
        return newhead;
    }
};
