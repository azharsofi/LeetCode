class Solution {
public:
void inorder(TreeNode* p,vector<int>&v){
    if(p!=NULL){
    inorder(p->left,v);
    v.push_back(p->val);
    inorder(p->right,v);}
    else
    v.push_back(100000);
}
void preorder(TreeNode* p,vector<int>&v){
     if(p!=NULL){
    v.push_back(p->val);
    preorder(p->left,v);
    preorder(p->right,v);}
     else
    v.push_back(100000);

}



    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> ip,iq,pp,pq;
        inorder(p,ip);
        inorder(q,iq);
         preorder(p,pp);
        preorder(q,pq);
        if(ip==iq&&pp==pq)
        return true;
        else
        return false;
        
    }
};
