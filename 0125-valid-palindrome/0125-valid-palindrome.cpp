class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(auto x : s){
            if(isalnum(x)){
                temp += tolower(x);
            }
        }
        string rev = temp;
        reverse(temp.begin() , temp.end());
        return temp == rev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna