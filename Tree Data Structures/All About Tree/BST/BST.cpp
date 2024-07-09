#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    int height;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int height(TreeNode* Node){
    if(Node == nullptr){
        return -1;
    }

    return Node->height;
}

TreeNode* insertNodeIntoBST(TreeNode* Node, int value){
    if(Node == nullptr){
        return new TreeNode(value);
    }
    if(Node->val > value){
        Node->left = insertNodeIntoBST(Node->left, value);
    }
    if(Node->val < value){
        Node->right = insertNodeIntoBST(Node->right, value);
    }

    Node->height = max(height(Node->left), height(Node->right)) + 1;
    return Node;
}

TreeNode* root = nullptr;


void displayTreePreOrder(TreeNode* root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->val<<" ";
    displayTreePreOrder(root->left);
    displayTreePreOrder(root->right);
}

void displayTreeInOrder(TreeNode* root)
{
    if (root == nullptr)
    {
        return;
    }

    displayTreeInOrder(root->left);
    cout << root->val<<" ";
    displayTreeInOrder(root->right);
}

void displayTreePostOrder(TreeNode* root)
{
    if (root == nullptr)
    {
        return;
    }

    displayTreePostOrder(root->left);
    displayTreePostOrder(root->right);
    cout << root->val<<" ";
}

bool isBalanced(TreeNode* Node){
    if(Node == nullptr){
        return true;
    }

    return abs(height(Node->left) - height(Node->right)) <= 1 && isBalanced(Node->left) && isBalanced(Node->right);
}

void populatedSorted(vector<int>&arr, int Start, int End){
    if(Start>=End){
        return;
    }
    int mid = (Start + End) / 2;
    root = insertNodeIntoBST(root, arr[mid]);

    populatedSorted(arr, Start, mid);
    populatedSorted(arr, mid+1, End);

}

int main()
{
    cout<<"Binary Search Tree"<<endl;
    cout<<"Enter Number of Nodes : "<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i+1<<" node value:"<<endl;
        int value;
        cin>>value;
        root = insertNodeIntoBST(root, value);
    }

    displayTreePreOrder(root);
    cout<<endl;
    if(isBalanced(root)){
        cout<<"This is a balanced BST"<<endl;
    }else{
        cout<<"This is not a balanced BST"<<endl;
    }

    // To avoid skewed BST or if user give a sorted order nodes:
   // vector<int>sortedArray{1,2,3,4,5,6,7,8,9,10};
   // populatedSorted(sortedArray, 0, sortedArray.size());

   // displayTreePreOrder(root);

    return 0;
}
