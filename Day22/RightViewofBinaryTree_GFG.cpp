/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution
{
public:
    vector<int> rightView(TreeNode *root)
    {
        //  code here
        vector<int> finalOutput;
        if (root == nullptr)
            return finalOutput;
        queue<Node *> pendingNodes;
        pendingNodes.push(root);
        while (!pendingNodes.empty())
        {
            int size = pendingNodes.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *front = pendingNodes.front();
                pendingNodes.pop();
                if (i == size - 1)
                {
                    finalOutput.push_back(front->val);
                }
                if (front->left != nullptr)
                {
                    pendingNodes.push(front->left);
                }
                if (front->right != nullptr)
                {
                    pendingNodes.push(front->right);
                }
            }
        }
        return finalOutput;
    }
};