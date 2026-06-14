#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int x) {
        val = x;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL) return NULL;

        unordered_map<Node*, Node*> mpp;

        // Create copy nodes
        Node* temp = head;
        while(temp != NULL) {
            Node* newNode = new Node(temp->val);
            mpp[temp] = newNode;
            temp = temp->next;
        }

        //Connect next and random pointers
        temp = head;
        while(temp != NULL) {
            Node* copyNode = mpp[temp];

            copyNode->next = mpp[temp->next];
            copyNode->random = mpp[temp->random];

            temp = temp->next;
        }

        return mpp[head];
    }
};

void printList(Node* head) {
    while(head != NULL) {
        cout << "Value: " << head->val;

        if(head->random)
            cout << ", Random: " << head->random->val;
        else
            cout << ", Random: NULL";

        cout << endl;
        head = head->next;
    }
}

int main() {
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);

    // Connect next pointers
    n1->next = n2;
    n2->next = n3;

    // Connect random pointers
    n1->random = n3;  // 1 -> 3
    n2->random = n1;  // 2 -> 1
    n3->random = n2;  // 3 -> 2

    cout << "Original List:\n";
    printList(n1);

    Solution obj;
    Node* copiedHead = obj.copyRandomList(n1);

    cout << "\nCopied List:\n";
    printList(copiedHead);

    return 0;
}
