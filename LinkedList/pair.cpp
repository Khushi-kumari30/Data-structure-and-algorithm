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

Node* findtail(Node* head){
    Node* temp = head;
    if(head==NULL) return NULL;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    return temp;
}
vector<vector<int>> pairSum(Node* head,int sum){
    vector<vector<int>>a;
    Node* left = head;
    Node* right = findtail(head);
    while(left != right && left->back != right){
        int currSum = left->data + right->data;
        if(currSum == sum){
            a.push_back({left -> data,right -> data});
            left = left ->next;
            right = right -> back;
        }else if(currSum > sum){
            right = right -> back;
        }else{
            left = left ->next;
        }
    }
    return a;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
int main(){
    vector<int> arr = {1,2,3,4,9};
   Node* head = convertArr2DLL(arr);
    Node* tail = head;
     while(tail -> next != NULL){
        tail = tail -> next;
    }
    print(head);
    cout<<endl;
    tail = findtail(head);
    print(tail);
    cout<<endl;
    vector<vector<int>> ans = pairSum(head, 5);

    for(auto pair : ans){
    cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
    }
    return 0;

}
