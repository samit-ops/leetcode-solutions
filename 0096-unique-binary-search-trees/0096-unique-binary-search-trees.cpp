class Solution {
public:
    int numTrees(int n) {
        long long result =1 ;
        if(n <=1 ){
            return 1;
        }
        for(int i=0;i<n;i++){
            result *= (2*n-i);
            result /= (i+1);
        }
        return (int)(result/(n+1));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna