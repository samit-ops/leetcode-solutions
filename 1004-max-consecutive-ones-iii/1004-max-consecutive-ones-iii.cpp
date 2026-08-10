class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int maxlength = 0;
        int n= nums.size();
        int count0 = 0;
        for(right =0 ;right<n ; right ++){
            if(nums[right] == 0){
                count0++;
            }
            while(count0 > k){
                if(nums[left] == 0){
                    count0 --;
                }
                left++;
            }
            maxlength = max(maxlength , right-left+1);
        }
        return maxlength;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna