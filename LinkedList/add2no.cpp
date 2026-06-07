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
 Node* addTwoNumbers(Node* t1, Node* t2) {
       if(t1 == NULL && t2 == NULL) return NULL;
        Node *dummy = new Node(-1);
        Node* curr = dummy;
        int carry = 0;
        while(t1 != NULL || t2 != NULL){
            int sum = carry;
            if(t1)
            sum = sum + t1 -> data;
            if(t2)
            sum += t2  -> data;

            Node* newNode =  new Node(sum % 10);
            carry = sum /10;
            curr -> next = newNode;
            curr = curr -> next;

            if(t1) t1 = t1 -> next;
            if(t2) t2 = t2 -> next;
        }
        if(carry){
            Node* newnode = new Node(carry);
            curr->next = newnode;
        }
        return dummy -> next;
    }

    void print(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp -> data << " ";

        temp = temp -> next;
    }
}

int main(){

    vector<int> arr = {4,3,5};
    vector<int>arr2 = {1,3,2};
    Node* head1 = convertArr2LL(arr);
    Node* head2 = convertArr2LL(arr2);
    Node* ans = addTwoNumbers(head1,head2);
    print(ans);
}
