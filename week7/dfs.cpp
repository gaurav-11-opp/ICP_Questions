#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    void traverse(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        traverse(root->left, result);   
        result.push_back(root->val);    
        traverse(root->right, result);  
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};
int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    Solution obj;
    vector<int> ans = obj.inorderTraversal(root);
    for (int x : ans)
        cout << x << " ";

    return 0;
}
