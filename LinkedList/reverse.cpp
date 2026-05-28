#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>&arr){

    Node* head = new Node(arr[0]);

    Node* temp = head;

    for(int i=1; i<arr.size(); i++){

        Node* newnode = new Node(arr[i]);

        temp -> next = newnode;

        temp = newnode;
    }

    return head;
}

Node* reverseLL(Node* &head){
    Node* curr = head;
    Node* pre = NULL;
    Node* next = NULL;

    while(curr != NULL){
        next = curr-> next;
        curr -> next = pre;
        pre = curr;
        curr = next;
    }
   return pre;
}

void print(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp -> data << " ";

        temp = temp -> next;
    }
}

int main(){

    vector<int> arr = {1,2,3,4,5};

    Node* head = convertArr2LL(arr);

    cout << "Before Reverse: ";
    print(head);

    cout << endl;

    head = reverseLL(head);

    cout << "After Reverse: ";
    print(head);

    return 0;
}
