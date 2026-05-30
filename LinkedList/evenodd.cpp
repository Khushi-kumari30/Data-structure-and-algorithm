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
Node* oddeven(Node* head){
    vector<int>l;
    Node* temp = head;
    while(temp != NULL){
        l.push_back(temp ->data);
        if(temp->next == NULL) break;
        temp = temp ->next -> next;
    }

    temp = head -> next;
    while(temp != NULL){
        l.push_back(temp->data);
          if(temp->next == NULL) break;
        temp = temp -> next->next;
    }
    temp = head;
    int i = 0;

    while(temp != NULL){
        temp->data = l[i++];
        temp = temp->next;
    }

    return head;
}
Node* oddevenOpti(Node* head){
    Node* odd = head;
    Node* even = head-> next;
    Node* evenhead = even;
    while(even != NULL && even-> next != NULL){
        odd -> next = odd -> next ->next;
        even -> next = even -> next -> next;

        odd = odd->next;
        even = even -> next;
    }
    odd -> next = evenhead;
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
    head = oddevenOpti(head);
    print(head);

    return 0;
}
