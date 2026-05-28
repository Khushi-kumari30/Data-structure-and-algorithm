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

Node* reverseDLL(Node* &head){
 Node* temp = head;
 stack<int>st;
 while(temp != NULL){
    st.push(temp-> data);
    temp = temp ->next;
 }

 temp = head;
 while(temp != NULL){
    temp-> data= st.top();
    st.pop();
    temp = temp -> next;
 }
return head;
}
Node* reverseDLLOpt(Node* &head){
    Node* back = NULL;
    Node* curr = head;

    if(head == NULL ||  head -> next == NULL){
        return head;
    }

    while(curr != NULL){
        back =  curr -> back;
        curr -> back = curr ->next;
        curr ->next = back;
        curr = curr->back;
    }
    return back ->back;
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
    Node* head = convertArr2DLL(arr);
    //head = reverseDLL(head);
    head = reverseDLLOpt(head);

    print(head);
    return 0;
}
