#include <bits/stdc++.h>
using namespace std;
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution {
    void solve(Node* root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->data);
        solve(root->left,ans);
        solve(root->right,ans);
    }
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> ans;
        solve(root,ans);
        return ans;
    }
};