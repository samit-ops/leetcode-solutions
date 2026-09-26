class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // int n = nums.size();
        // for(auto x :nums){
        //     mp[x]++;
        // }
        // for(int i=0;i<n;i++){
        //     if(mp[nums[i]] >=2){
        //         return nums[i];
        //     }
        // }
        // return -1;

        int slow = nums[0];
        int fast = nums[0];
        int n = nums.size();
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(fast == slow){
                break;
            }
        }
    slow = nums[0];
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna