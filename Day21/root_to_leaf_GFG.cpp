class Solution {
    void solve(Node* root,vector<vector<int>>&finalAns,vector<int>&path){
        
        if(root==nullptr){
            return;
        }
        path.push_back(root->data);
        if(root->left==nullptr && root->right==nullptr){
            finalAns.push_back(path);
        }
        solve(root->left,finalAns,path);
        solve(root->right,finalAns,path);
        path.pop_back();
    }
    public:
    vector<vector<int>> Paths(Node* root)
    {
        // code here
        vector<vector<int>> finalAns;
        vector<int> path;
        solve(root,finalAns,path);
        return finalAns;
    }
};