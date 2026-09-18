class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        int maxwidth=0;
        int width =0;
        while(!q.empty()){
            int first;
            int last;
            int size = q.size();
            long long mini = q.front().second;
            for(int i=0; i<size; i++){
                TreeNode* node = q.front().first;
                long long current = q.front().second - mini;
                q.pop();
                if(i==0){
                    first = current;
                }
                if(i == size-1){
                    last = current;
                }
                if(node->left){
                    q.push({node->left , 2*current+1});
                }
                if(node->right){
                    q.push({node->right, 2*current+2});
                }
        }
        width = last - first +1;
        maxwidth = max(maxwidth,width);
        }
        return maxwidth;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna