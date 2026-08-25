class Solution {
public:
    TreeNode* solve(vector<int>&ans , int left , int right){
        if(left>right){
            return NULL;
        }
        int mid = left + (right - left)/2;
        TreeNode* root = new TreeNode(ans[mid]);

        root->left = solve(ans , left , mid-1);
        root->right = solve(ans, mid+1 , right);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& ans) {
         return solve(ans, 0 , ans.size()-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna