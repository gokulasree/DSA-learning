class Solution {
    int bfs(TreeNode* root,vector<vector<int>>&ans){
        if(root==nullptr)return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int ls=q.size();
            vector<int> pending_Nodes;
            for(int i=0;i<ls;i++){
                TreeNode* frontnode=q.front();
                q.pop();
                pending_Nodes.push_back(frontnode->val);
                if(frontnode->left!=nullptr)q.push(frontnode->left);
                if(frontnode->right!=nullptr)q.push(frontnode->right);
            }
            ans.push_back(pending_Nodes);
        }
        return 1;
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        bfs(root,ans);
        return ans;
    }
    
};