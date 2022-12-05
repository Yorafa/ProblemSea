/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    vector<int> lst;
    vector<int>::iterator i;
    void ins(TreeNode* root){
        if (!root) return;
        ins(root->left);
        lst.push_back(root->val);
        ins(root->right);
    }
    
    BSTIterator(TreeNode* root) {
        lst.push_back(0);
        ins(root);
        index = 0;
    }
    
    bool hasNext() {
        if (index >= lst.size() - 1) return false;
        return true;
    }
    
    int next() {
        return lst[++index];
    }
    
    bool hasPrev() {
        if (index <= 1) return false;
        return true;
    }
    
    int prev() {
        return lst[--index];
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * bool param_1 = obj->hasNext();
 * int param_2 = obj->next();
 * bool param_3 = obj->hasPrev();
 * int param_4 = obj->prev();
 */
