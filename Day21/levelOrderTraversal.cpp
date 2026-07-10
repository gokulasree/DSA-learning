class Solution
{
public:
    BinaryTreeNode TakeInputLevelWise()
    {
        int rootData;
        cout << "Enter root data: ";
        cin >> rootData;
        if (rootData == -1)
        {
            return NULL;
        }
        BinaryTreeNode root = new BinaryTreeNode(rootData);
        queue<BinaryTreeNode> pendingNodes;
        pendingNodes.push(root);
        while (pendingNodes.size() != 0)
        {
            BinaryTreeNode front = pendingNodes.front();
            pendingNodes.pop();

            cout << "Enter left child of " << front->data << ": ";
            int leftChildData;
            cin >> leftChildData;
            if (leftChildData != -1)
            {
                BinaryTreeNode *leftChild = new BinaryTreeNode(leftChildData);
                front->left = leftChild;
                pendingNodes.push(leftChild);
            }

            cout << "Enter right child of " << front->data << ": ";
            int rightChildData;
            cin >> rightChildData;
            if (rightChildData != -1)
            {
                BinaryTreeNode *rightChild = new BinaryTreeNode(rightChildData);
                front->right = rightChild;
                pendingNodes.push(rightChild);
            }
        }
        return root;
    }
    void printLevelWise(BinaryTreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        queue<BinaryTreeNode *> pendingNodes;
        pendingNodes.push(root);
        while (pendingNodes.size() != 0)
        {
            BinaryTreeNode *front = pendingNodes.front();
            pendingNodes.pop();
            cout << front->data << ":";
            if (front->left != NULL)
            {
                // cout<<"L:"<<front->left->data<<",";
                pendingNodes.push(front->left);
            }
            if (front->right != NULL)
            {
                // cout<<"R:"<<front->right->data;
                pendingNodes.push(front->right);
            }
        }
    }
    int main()
    {
        BinaryTreeNode root = TakeInputLevelWise();
        // cout<<"Level order traversal of binary tree is: "<<endl;
        // levelOrderTraversal(root);
        printLevelWise(root);
    }
};
