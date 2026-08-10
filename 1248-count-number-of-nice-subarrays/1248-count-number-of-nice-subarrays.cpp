class Solution {
public:
    int atmost(vector<int>& nums, int k){
        int right = 0;
        int left = 0;
        int countsubarray = 0;
        int oddcount = 0;
        int n = nums.size();
        for(right = 0 ; right<n; right ++){
            if(nums[right]%2 != 0){
                oddcount++;
            }
            while(oddcount > k){
                if(nums[left]%2 != 0){
                    oddcount--;
                }
                left++;
            }
            countsubarray += right-left+1;
        }
        return countsubarray;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = atmost(nums,k) - atmost(nums,k-1);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna