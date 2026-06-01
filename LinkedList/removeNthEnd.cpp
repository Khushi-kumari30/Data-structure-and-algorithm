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

Node* convertArr2LL(vector<int>& arr){
     Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i = 1; i < arr.size(); i++){

        Node* newNode = new Node(arr[i]);

        temp->next = newNode;
        temp = newNode;
    }

    return head;

}
Node* removeNthEnd(Node* &head,int n){
    Node* fast = head;
    Node* slow = head;
    for(int i=0;i<n;i++){
        fast = fast ->next;
    }

    while(fast -> next != NULL){
        slow = slow -> next;
        fast = fast ->next;
    }
    if(fast == NULL){
        return head; //5 elements
    }
    Node* delNode = slow -> next;
    slow -> next = slow -> next -> next;
    free(delNode);

    return head;
}

void print(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}



int main(){

    vector<int> arr = {1,3,4,2,5,6};

    Node* head = convertArr2LL(arr);
    print(head);
    head = removeNthEnd(head,2);
    print(head);

    return 0;
}
