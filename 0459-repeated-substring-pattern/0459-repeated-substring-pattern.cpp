class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len;
        int n = s.size();
        for(len = n/2;len>=1;len--){
            if(n % len !=0){
                continue;
            }
            bool same = true;
            string pattern = s.substr(0,len);
            for(int i = len; i<n; i+=len){
                if(s.substr(i,len) != pattern){
                    same = false;
                    break;
                }
            }
        if(same){
            return true;
        }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna