#include <iostream>
#include <climits>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to check if a binary tree is a binary search tree
bool isBST(TreeNode* root, int minVal = INT_MIN, int maxVal = INT_MAX) {
    if (root == NULL) {
        return true;
    }
    if (root->val < minVal || root->val > maxVal) {
        return false;
    }
    return isBST(root->left, minVal, root->val - 1) && isBST(root->right, root->val + 1, maxVal);
}

// Function to create a binary tree from an array
TreeNode* createTree(int arr[], int n, int i = 0) {
    TreeNode* root = NULL;
    if (i < n && arr[i] != -1) {
        root = new TreeNode(arr[i]);
        root->left = createTree(arr, n, 2 * i + 1);
        root->right = createTree(arr, n, 2 * i + 2);
    }
    return root;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    TreeNode* root = createTree(arr, n);
    if (isBST(root)) {
        cout << "The given binary tree is a BST" << endl;
    } else {
        cout << "The given binary tree is not a BST" << endl;
    }
    return 0;
}
