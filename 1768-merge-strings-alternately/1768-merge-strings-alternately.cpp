class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans ="";
        for(int i=0; i< word1.size() || i<word2.size() ; i++){
            if(i<word1.size()){
                ans.push_back(word1[i]);
            }
            if(i<word2.size()){
                ans.push_back(word2[i]);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna