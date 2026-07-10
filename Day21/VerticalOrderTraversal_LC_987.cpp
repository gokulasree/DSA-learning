class Solution {
    void solve(Node* root, vector<vector<int>>& ans) {
        if(root == nullptr) return;
        queue<pair<Node*, int>> pendingNodes;
        pendingNodes.push({root, 0});

        map<int, vector<int>> myMap;
        
        while(!pendingNodes.empty()){

            pair<Node*, int> front = pendingNodes.front();
            pendingNodes.pop();

            Node* node = front.first;
            int hd = front.second;

            myMap[hd].push_back(node->val);

            if(node->left != nullptr) {
                pendingNodes.push({node->left, hd - 1});
            }

            if(node->right != nullptr) {
                pendingNodes.push({node->right, hd + 1});
            }
        }
        for(auto it : myMap) {
            ans.push_back(it.second);
        }
    }
public: 
    vector<vector<int>> verticalTraversal(Node* root) {
        vector<vector<int>> ans;
        solve(root,ans);
        
        return ans;
    }
};