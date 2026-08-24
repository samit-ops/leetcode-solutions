class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxf=0;
        int count=0;
        for(auto x:nums){
            mp[x]++;
            maxf = max(maxf,mp[x]);
        }
        for(auto it:mp){
            if(it.second == maxf){
                count+=it.second;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna