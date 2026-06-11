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
    Node* getTail(Node* head){
    Node* temp = head;
    while(temp ->next != NULL){
        temp = temp ->next;
    }
    return temp;
}
Node* rotateByOne(Node* head){
    if(head == NULL || head -> next == NULL) return head;
    Node* prev = NULL;
    Node* curr = head;
    while(curr -> next != NULL){
        prev = curr;
        curr = curr -> next;
    }
    prev -> next =  NULL;
    curr -> next = head;
    head  = curr;

    return head;
}
    Node* rotateRight(Node* head, int k) {
        if(head == NULL || head -> next == NULL) return head;
        //minimize len
        Node* temp = head;
        int l = 0;
        while(temp != NULL){
            l++;
            temp = temp -> next;
        }
        k = k % l;
        while(k--){
            head = rotateByOne(head);
        }
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

    vector<int> arr = {1,2,3,4,5};

    Node* head = convertArr2LL(arr);

     print(head);
     head = rotateByOne(head);
     cout<<endl;
     print(head);
     cout<<endl;
     head = rotateRight(head,1);
     print(head);
    return 0;
}
