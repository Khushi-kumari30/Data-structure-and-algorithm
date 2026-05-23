
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

void deleteatFront(Node* &head){
//if(head == NULL) return head;
Node * temp = head;
head = head -> next;
free(temp);
}

void deleteatEnd(Node* &head){
    Node* temp = head;
    if(head == NULL || head -> next == NULL){
        cout<<"NULL";
    }
while(temp -> next -> next != NULL){
temp = temp-> next;
}
free(temp->next);
temp -> next = NULL;
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
    insertAtEnd(head,tail,1);
    insertAtEnd(head,tail,2);
    insertAtEnd(head,tail,3);
    insertAtEnd(head,tail,4);
    deleteatFront(head);
    deleteatEnd(head);
    print(head);

}
