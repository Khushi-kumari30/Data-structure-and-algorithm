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

int lefthei(Treenode* node){
int hei = 0;
while(node){
    hei++;
    node = node -> left;
}
return hei;
}
int rightthei(Treenode* node){
    int hei = 0;
    while(node){
        hei++;
        node = node -> right;
    }
    return hei;
}
int countNode(Treenode* node){
if(node == NULL) return 0;
int lh = lefthei(node);
int rh = rightthei(node);

if(lh == rh) return (1 << lh) - 1;

return 1 + countNode(node -> left) + countNode(node -> right);
}

int main(){
Treenode* root = new Treenode(1);

root -> left = new Treenode(2);
root -> right = new Treenode(3);
root -> left -> left = new Treenode(4);
root -> left ->right = new Treenode(5);
root -> right -> left =  new Treenode(6);
cout<<countNode(root);

return 0;
}
