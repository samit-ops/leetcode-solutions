class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        int difference = (nums[1]-nums[0]);
        int len=2;
        int count=0;
        for(int i=2;i<nums.size();i++){
            int currentdifference = (nums[i]-nums[i-1]);
            if(currentdifference == difference){
                len++;
                if(len>=3){
                    count += len-2;
                }
                }
            else{
                difference = currentdifference;
                len = 2;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna