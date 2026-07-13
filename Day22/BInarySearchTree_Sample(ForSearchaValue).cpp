/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        if(root==nullptr){
            return false;
        }
        if(root->data==key){
            return true;
        }
        else if(key<root->data){
            return search(root->left,key);
        }
        else{
            return search(root->right,key);
        }
    }
    int main(){
        Node* root=new Node(10);
        root->left=new Node(5);
        root->right=new Node(15);
        root->left->left=new Node(3);
        root->left->right=new Node(7);
        root->right->left=new Node(12);
        root->right->right=new Node(18);
        int key=5;
        bool found=search(root,key);
        if(found){
            cout<<"Key "<<key<<" found in the BST."<<endl;
        }
        else{
            cout<<"Key "<<key<<" not found in the BST."<<endl;
        }
    }
};

