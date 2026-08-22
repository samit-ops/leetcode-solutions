class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
       unordered_map<int,int>mp;
       mp[0]=1;
       long long sum=0;
       long long count=0;
       for(int i=0 ; i<arr.size();i++){
        sum+=arr[i];
        int rem = sum % 2;
        int req = 1-rem;
        if(mp.find(req)!=mp.end()){
            count+= mp[req];
        }
        mp[rem]++;
       }
       return count % 1000000007; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna