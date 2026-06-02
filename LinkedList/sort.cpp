
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

Node* sortList(Node* head) {
        if(head == NULL){
            return NULL;
        }
        if(head -> next == NULL){
            return head;
        }
        vector<int>a;
        Node *temp = head;
        while(temp != NULL){
         a.push_back(temp->data);
         temp= temp -> next;
        }
        sort(a.begin(),a.end());

        int i=0;
        temp = head;
        while(temp != NULL){
            temp -> data = a[i];
            i++;
            temp = temp->next;
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

    vector<int> arr = {3,6,1,2,1};
    Node* head = convertArr2DLL(arr);
    print(head);
    sortList(head);
    print(head);
    return 0;
}
