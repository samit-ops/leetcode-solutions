class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        st.insert(nums.begin(),nums.end());
        int index = 0;
        for(auto i : st){
            nums[index++] = i;
        }
        return st.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna