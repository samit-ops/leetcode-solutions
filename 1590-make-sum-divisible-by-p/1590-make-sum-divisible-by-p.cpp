class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        unordered_map<int,int>mp;
        long long total=0;
        mp[0]=-1;
        for(auto x : nums){
            total+=x;
        }
        int minimum = INT_MAX;
        long long sum=0;
        long long target = total % p;
        if(target<0){
            return -1;
        }
        if(target==0){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem = sum%p;
            int required = (rem - target + p)%p;
            if(mp.find(required)!=mp.end()){
                minimum = min(minimum,i-mp[required]);
            }
            mp[rem]=i;
        }
        if(minimum == INT_MAX || minimum == nums.size()){
            return -1;
        }
        return minimum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna