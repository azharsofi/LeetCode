class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL)//base case
        
        return 0;
        return max(height(node->left),height(node->right))+1;;
    }
};
