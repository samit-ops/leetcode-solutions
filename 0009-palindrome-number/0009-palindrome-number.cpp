class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0;
        int original = x;
        if(x < 0){
            return false;
        }
        while(x){
            int digit = x % 10;
            reverse = 10 * reverse + digit;
            x = x/10;
        }
        return reverse == original;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna