class Solution {
public:

void pot(vector<int>&ans,TreeNode* root){
    if(root!=NULL){
       pot(ans,root->left);
       pot(ans,root->right);
       int data=root->val;
       ans.push_back(data);
       
   }}
    vector<int> postorderTraversal(TreeNode* root) {
        
            vector<int> ans;
            pot(ans,root);
            return ans;
        
    }
   

}
