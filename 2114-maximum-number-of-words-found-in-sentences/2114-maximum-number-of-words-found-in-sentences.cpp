class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(string s : sentences){
            int words = 1;
            for(char ch : s){
                if(ch == ' ')
                words++;
            }
            ans = max(ans, words);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna