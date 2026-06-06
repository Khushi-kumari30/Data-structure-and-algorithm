#include<bits/stdc++.h>
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
Node* sort012(Node* head){
    Node* temp = head;
    int cnt0 = 0,cnt1 = 0,cnt2=0;
    while(temp != NULL){
        if(temp ->data == 0) cnt0++;
        else if(temp -> data == 1) cnt1++;
        else cnt2++;

        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL){
        if(cnt0){
            temp -> data = 0;
            cnt0--;
        }else if(cnt1){
            temp -> data = 1;
            cnt1--;
        }else{
            temp -> data = 2;
            cnt2--;
        }
        temp = temp -> next;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}

int main(){
  vector<int> arr = {1,0,2,1,0,2,1};
    Node* head = convertArr2LL(arr);
    print(head);
    head = sort012(head);
    cout<<endl;
    print(head);
    return 0;
}
