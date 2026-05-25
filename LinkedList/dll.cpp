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
    print(head);
    return 0;

}
