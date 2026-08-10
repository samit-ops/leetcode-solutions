class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int right =0;
        int left =0;
        int n = fruits.size();
        int maxcount =0 ;
        int distinct= 0;
        for(right=0;right<n;right++){
            mp[fruits[right]]++;
            if(mp[fruits[right]] == 1){
                distinct++;
            }
            while(distinct > 2){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0){
                    distinct--;
                }
                left++;
            }
            maxcount = max(maxcount , right - left +1);
        }
        return maxcount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna