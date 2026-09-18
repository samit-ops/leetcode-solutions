class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        long long largest = LONG_LONG_MIN;
        long long second = LONG_LONG_MIN;
        long long third = LONG_LONG_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] > largest){
                third = second;
                second = largest;
                largest = nums[i];
            }
            else if(nums[i] > second && nums[i] != largest){
                third = second;
                second = nums[i];
            }
            else if(nums[i] > third && nums[i] != second && nums[i] != largest){
                third = nums[i];
            }
        }
        if(third == LONG_LONG_MIN){
            return largest;
        }
        else{
            return third;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna