class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        int maxl=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
            }else{
                sum--;
            }
            if(mp.find(sum)!=mp.end()){
                maxl= max(maxl, i-mp[sum]);
            }else{
                mp[sum]=i;
            }
        }
        return maxl;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna