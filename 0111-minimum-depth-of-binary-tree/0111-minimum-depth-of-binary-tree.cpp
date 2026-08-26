class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        int depth = 1 + min(left,right);
        if(root->left == NULL){
            return 1 + right;
        }
        else if(root->right == NULL){
            return 1 + left;
        }
        return depth;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna