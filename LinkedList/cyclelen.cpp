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
int findlen(Node* slow,Node* fast){
    int cnt = 1;
     fast = fast->next;
    while(slow != fast){
        cnt++;
        fast = fast -> next;
    }
    return cnt;
}

int detectCycle(Node* head){
Node* fast = head;
Node * slow = head;
while(fast != NULL && fast ->next != NULL){
    slow = slow -> next;
    fast = fast -> next -> next;

  if(slow == fast){
    return findlen(slow,fast);
  }
}
  return 0;

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
    Node* head = convertArr2LL(arr);
    Node* temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = head -> next;

    cout<<detectCycle(head);

    /*if(detectCycle(head)){
        cout << "Cycle Detected";
    }
    else{
        cout << "No Cycle";
    }*/

    return 0;
}
