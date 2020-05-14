/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int maxUtil(TreeNode *root, int &res){
     if(!root) return 0;
     int l=maxUtil(root->left,res);
     int r=maxUtil(root->right,res);
     
     int max_single,max_top;
     max_single = max(max(l,r)+root->val,root->val);
     max_top = max(max_single,l+r+root->val);
     res = max(res,max_top);
     return max_single;
 }
int Solution::maxPathSum(TreeNode* A) {
    
    int res=INT_MIN;
    maxUtil(A,res);
    return res;
}
