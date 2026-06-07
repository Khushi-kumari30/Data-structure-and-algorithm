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
Node* reverse(Node* head){
      Node* prev = NULL;
    Node* curr =head;
    Node* next = NULL;
    while(curr != NULL){
        next = curr-> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* addOne(Node* head){
 head = reverse(head);
 Node* temp = head;
 int carry = 1;
 while(temp != NULL){
    temp -> data = temp -> data + carry;
    if(temp -> data <10){
        carry = 0;
        break;
    }else{
        temp -> data = 0;
        carry = 1;
    }
    temp = temp ->next;
 }
 if(carry == 1){
    Node* newnode = new Node(1);
    head = reverse(head);
    newnode -> next = head;
    return newnode;
 }
   head = reverse(head);
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

    vector<int> arr = {9,9,9,9};
    Node* head = convertArr2LL(arr);
    head = addOne(head);
    print(head);
}
