#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* root = nullptr;

void insertIntoRootNode()
{
    if (root == nullptr)
    {
        cout << "Enter root value: ";
        int value;
        cin >> value;
        root = new TreeNode(value);
    }
}

void insertNodeIntoTree(TreeNode* node)
{
    cout << "Do you want to enter left of " << node->val << "? (1 for yes, 0 for no): ";
    bool left;
    cin >> left;
    if (left)
    {
        cout << "Enter the value of the left of " << node->val << ": ";
        int value;
        cin >> value;
        node->left = new TreeNode(value);
        insertNodeIntoTree(node->left);
    }

    cout << "Do you want to enter right of " << node->val << "? (1 for yes, 0 for no): ";
    bool right;
    cin >> right;
    if (right)
    {
        cout << "Enter the value of the right of " << node->val << ": ";
        int value;
        cin >> value;
        node->right = new TreeNode(value);
        insertNodeIntoTree(node->right);
    }
}

void displayTreePreOrder(TreeNode* root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->val << endl;
    displayTree(root->left);
    displayTree(root->right);
}

int main()
{
    insertIntoRootNode();
    insertNodeIntoTree(root);
    displayTree(root);
    return 0;
}
