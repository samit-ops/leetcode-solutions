class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
       int left = 0;
       int right = n-1;
       int pos = n-1; 
       while(left <= right){
        if(abs(nums[left]) > abs(nums[right])){
            ans[pos] = nums[left] * nums[left];
            left ++;
        }else if(abs(nums[right]) >= abs(nums[left])){
            ans[pos] = nums[right] * nums[right];
            right--;
        }
        pos--;
       }
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna