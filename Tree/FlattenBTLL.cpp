#include<bits/stdc++.h>
using namespace std;

struct Treenode
{
    int data;
    Treenode* left;
    Treenode* right;

    Treenode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Treenode* previous = NULL;
void flatten(Treenode* root){
if(root == NULL) return;

flatten(root -> right);
flatten(root -> left);

root -> right = previous;
root -> left = NULL;
previous = root;
}

int main(){
Treenode* root = new Treenode(1);

root -> left = new Treenode(2);
root -> right = new Treenode(5);
root -> left -> left = new Treenode(3);
root -> left ->right = new Treenode(4);
root -> right -> right =  new Treenode(6);
root -> right -> right ->  left =  new Treenode(7);
flatten(root);
Treenode* curr = root;
while(curr != NULL){
    cout<<curr -> data;
     if (curr->right != NULL) cout << " -> ";
        curr= curr->right;
    }
    cout << endl;
}
