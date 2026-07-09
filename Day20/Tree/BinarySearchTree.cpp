#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

BinaryTreeNode *takeInput()
{
    int rootData;
    cout << "Enter root data: ";
    cin >> rootData;

    if (rootData == -1)
    {
        return NULL;
    }

    // create a new node with the input data
    BinarySearchTree *root = new BinarySearchTree(rootData);

    // attach the left and right subtrees recursively
    root->left = takeInput();
    root->right = takeInput();

    return root;
}

void printBinaryTree(BinarySearchTree *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << "Root: " << root->data << ": ";

    if (root->left != NULL)
    {
        cout << "L" << root->left->data << " ";
    }

    if (root->right != NULL)
    {
        cout << "R" << root->right->data << " ";
    }

    printBinaryTree(root->left);
    printBinaryTree(root->right);
}
