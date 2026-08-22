class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        long long count = 0;

        long long even = 1;
        long long odd = 0;

        int sum = 0;

        for(int i = 0; i < arr.size(); i++) {

            sum += arr[i];

            if(sum % 2 == 0) {
                count += odd;
                even++;
            }
            else {
                count += even;
                odd++;
            }
        }

        return count % 1000000007;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna