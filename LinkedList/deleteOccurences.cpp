#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1,Node*back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* convertArr2DLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* pre = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,pre);
        pre -> next = temp;
        pre = temp;
    }
return head;
}

Node* addFront(Node* &head,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
      head = newnode;
      head -> back = NULL;
      head -> next = NULL;
    }else{
        newnode -> next = head;
        head -> back = newnode;
        head = newnode;
        newnode -> back = NULL;
    }
    return head;
}
Node* addBack(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }else{
    tail -> next = newnode;
    newnode -> back = tail;
    tail =newnode;
    newnode-> next = NULL;
    }
    return head;
}
Node* deletefront(Node* &head){
    Node* temp = head;
    if(head == NULL){
        return NULL;
    }
    head = head -> next;
    if(head != NULL){
        head ->back = NULL;
    }
        temp -> next = NULL;
        delete temp;

return head;
}

Node* deleteBack(Node* &head,Node* &tail){
    if(head ==NULL){
        return NULL;
    }
    Node* temp = tail;
    tail = tail ->back;
    if(tail != NULL){
        tail ->next = NULL;
    }
    temp ->back = NULL;
    delete temp;
    return head;
}

Node* deleteOccurences(Node* head,int key){
    Node * temp = head;
    while(temp != NULL){
        if(temp -> data == key){
            if(temp == head){
             head = head -> next;
            }
            Node* nextNode = temp -> next;
            Node* prevNode = temp -> back;

            if(nextNode) nextNode -> back = prevNode;
            if(prevNode) prevNode -> next = nextNode;

            free(temp);
            temp = nextNode;
        }else{
            temp = temp ->next;
        }
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
int main(){
    vector<int> arr = {12,5,8,2};
   Node* head = convertArr2DLL(arr);
    Node* tail = head;
     while(tail -> next != NULL){
        tail = tail -> next;
    }
    //head = deleteBack(head,tail);
    head = addFront(head,10);
    head = addFront(head,8);
    head = addBack(head,tail,10);
    head = addBack(head,tail,19);
    print(head);
    cout<<endl;
    head = deleteOccurences(head,10);
    print(head);
    return 0;

}
