#include<iostream>
#include<vector>
using namespace std;
struct Node{
public:
int data;
Node* next;
Node(int val){
    data = val;
    next = NULL;
}
};
void insert_beg(Node* &head,Node* &tail,int val){
Node* newnode = new Node(val);
if(head == NULL){
    head = newnode;
    tail = newnode;
    return;
}else{
    newnode -> next = head;
    head = newnode;
}
}

void insertAtEnd(Node*& head, Node*& tail, int val) {
   Node* newnode = new Node(val);
   if(head == NULL){
    head = newnode;
    tail = newnode;
    return;
   }else{
    tail -> next = newnode;
    tail = newnode;
   }
}

void print(Node*head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtEnd(head,tail,10);
    insertAtEnd(head,tail,20);
    insertAtEnd(head,tail,30);
    insertAtEnd(head,tail,40);
    insert_beg(head,tail,40);
    insertAtEnd(head,tail,70);
    print(head);

}
