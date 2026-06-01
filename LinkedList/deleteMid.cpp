#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int>&arr){

    Node* head = new Node(arr[0]);
     Node* prev = head;

    for(int i=1; i<arr.size(); i++){
      Node* temp = new Node(arr[i], nullptr, prev);
       prev -> next = temp;
       prev = temp;
    }

    return head;
}

Node* deleteMiddle(Node* head) {
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        Node* fast = head;
        Node* slow = head;
        fast = head -> next -> next;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        Node* mid = slow->next;
        slow -> next = slow ->next->next;
        delete mid;
        return head;
    }


void print(Node* head){
    Node* temp = head;

    while(temp != NULL){

        cout << temp -> data << " ";
         temp = temp -> next;
    }
}

int main(){

    vector<int> arr = {1,2,3,4,5,9};
    Node* head = convertArr2DLL(arr);
    print(head);
    cout<<endl;
    head = deleteMiddle(head);
    print(head);
    return 0;
}
