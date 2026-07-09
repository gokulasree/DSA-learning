#include "BinarySearchTree.h"
#include <iostream>
using namespace std;
void printTree(BinarySearchTree *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";

    if (root->left != NULL)
    {
        cout << "Left of " << root->data << " : ";
    }
    if (root->right != NULL)
    {
        cout << "Right of " << root->data << " : ";
    }
}

int main()
{
    BinarySearchTree *root = new BinarySearchTree(10);
    root->left = new BinarySearchTree(5);
    root->right = new BinarySearchTree(15);
    root->left->left = new BinarySearchTree(3);
    root->left->right = new BinarySearchTree(7);
    root->right->right = new BinarySearchTree(18);

    printTree(root);
    
    return 0;

}