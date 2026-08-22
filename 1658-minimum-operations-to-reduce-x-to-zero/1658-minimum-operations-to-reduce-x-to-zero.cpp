class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int right;
        int maxl=-1;
        int left=0;
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }
        int target = totalsum - x;
        if(target<0){
            return -1;
        }
        if(target==0){
            return nums.size();
        }
        for(right=0;right<nums.size();right++){
            sum+=nums[right];
            if(sum > target){
                while(sum > target){
                sum-=nums[left];
                left++;
                }
            }if(sum==target){
                maxl = max(maxl, right-left+1);
            }
        }
        if(maxl == -1){
            return -1;
        }
        return nums.size()-maxl;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna