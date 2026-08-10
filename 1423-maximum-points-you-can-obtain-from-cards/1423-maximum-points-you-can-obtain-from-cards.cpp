class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int windowsum = 0;
        int minimumsum = 0;
        int totalsum = 0;
        int n = cardPoints.size();
        int left = 0;
        int right = 0;
        for(int i=0;i<n;i++){
            totalsum += cardPoints[i];
        }
        int windowsize = n-k;
        for(right = 0;right<windowsize ; right++){
            windowsum += cardPoints[right];
            minimumsum = windowsum;
        }
        for(right = windowsize ; right<n ; right++){
            windowsum += cardPoints[right];
            windowsum -= cardPoints[left];
            left++;
            minimumsum = min(windowsum , minimumsum);
        }
        return totalsum - minimumsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna