class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        // Your code here
        if (root == NULL)
        return 0;
 
    // Base case : Leaf Node. This accounts for height = 1.
    if (root->left == NULL && root->right == NULL)
    return 1;
   
    int l = INT_MAX, r = INT_MAX;
    // If left subtree is not NULL, recur for left subtree
   
    if (root->left)
    l = minDepth(root->left);
 
    // If right subtree is not NULL, recur for right subtree
    if (root->right)
    r =  minDepth(root->right);
 
  //height will be minimum of left and right height +1 
    return min(l , r) + 1;
    }
};
