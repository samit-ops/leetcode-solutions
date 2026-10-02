class Solution {
public:
void valid(string &ans, int n, int open, int close , int i, vector<string>&result){
    if(i == 2*n){
        result.push_back({ans});
        return;
    }
    if(open < n){
        ans.push_back('(');
        valid(ans,n,open+1,close,i+1,result);
        ans.pop_back();
    }
    if(close < open){
            ans.push_back(')');
            valid(ans,n,open,close+1,i+1,result);
            ans.pop_back();
        }
}
    vector<string> generateParenthesis(int n) {
        string ans;
        vector<string>result;
        valid(ans,n,0,0,0,result);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna