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

Node* reverse(Node* head){
    Node* curr = head;
    Node *prev = NULL;
    while(curr != NULL){
        Node* nextnode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextnode;
    }
    return prev;
}
    Node* getkthNode(Node* temp,int k){
    k -= 1;
    while(temp != NULL && k > 0){
        k--;
        temp = temp -> next;
    }
    return temp;
}
    Node* reverseKGroup(Node* head, int k) {
        Node* temp = head;
        Node*  prev = NULL;
        while(temp != NULL){
            Node* kthnode = getkthNode(temp,k);
            if(kthnode == NULL){
                if(prev) prev -> next = temp;
                break;
            }

            Node* nextnode = kthnode -> next;
            kthnode -> next = NULL;
            reverse(temp);
            if(temp == head){
                head = kthnode;
            }else{
                prev -> next = kthnode;
            }
            prev = temp;
            temp = nextnode;
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

    vector<int> arr = {1,2,3,4,5,2,4,6,8,9};

    Node* head = convertArr2LL(arr);

    cout << "Before Reverse: ";
    print(head);

    cout << endl;

    head = reverseKGroup(head,3);

    cout << "After Reverse: ";
    print(head);

    return 0;
}
