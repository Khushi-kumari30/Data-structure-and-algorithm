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
  Node* deleteDuplicates(Node* head) {
        unordered_map<int,int>freq;
        Node* temp = head;
        while(temp != NULL){
           freq[temp->data]++;
           temp= temp -> next;
        }
        Node* dummy = new Node(0);
        Node* tail = dummy;
        temp = head;
        while(temp != NULL){
            if(freq[temp -> data] == 1){
                tail ->next = new Node(temp -> data);
                tail = tail ->next;
            }
            temp = temp -> next;
        }
       return dummy -> next;
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

    vector<int> arr = {1,1,3,4,5,5};

    Node* head = convertArr2LL(arr);
    print(head);
    head = deleteDuplicates(head);
    print(head);

    return 0;
}
