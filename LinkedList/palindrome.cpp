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

Node* convertArr2LL(vector<int>& arr){
     Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i = 1; i < arr.size(); i++){

        Node* newNode = new Node(arr[i]);

        temp->next = newNode;
        temp = newNode;
    }

    return head;

}

bool isPalindrome(Node* head){

    stack<int>s;
    Node* temp= head;
    while(temp != NULL){
        s.push(temp ->data);
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        if(temp->data != s.top()) return false;

        temp = temp ->next;
        s.pop();
    }
    return true;
}

void print(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){

    vector<int> arr = {1, 2, 3, 2, 1};

    Node* head = convertArr2LL(arr);

    print(head);

    if(isPalindrome(head)){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }

    return 0;
}
