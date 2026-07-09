#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void solve(Node* root,vector<int>&ans){
     if(root==nullptr){
            return;
        }
        solve(root->left,ans);
        ans.push_back(root->data);
        solve(root->right,ans);
}
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> ans;
        solve(root,ans);
        return ans;
       
    }
};