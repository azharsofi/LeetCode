class Solution {
public:

void pot(vector<int>&ans,TreeNode* root){
    if(root!=NULL){
        pot(ans,root->left);
       int data=root->val;
       ans.push_back(data);
       pot(ans,root->right);
   }}
    vector<int> preorderTraversal(TreeNode* root) {
        
            vector<int> ans;
            pot(ans,root);
            return ans;
        
    }
   

};
