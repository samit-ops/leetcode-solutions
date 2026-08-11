class Solution {
public:
vector<string>ans;
string current ="";
vector<string> keypad ={
    "",
    "",
    "abc",//2
    "def",//3
    "ghi",//4
    "jkl",//5
    "mno",//6
    "pqrs",//7
    "tuv",//8
    "wxyz"//9
      };
      void solve(int index , string &digits){
        if(index == digits.size()){
            ans.push_back(current);
            return;
        }
        int num = digits[index] - '0';
        string letter = keypad[num];
        for(auto c : letter){
            current.push_back(c);
            solve(index + 1, digits);
            current.pop_back();
        }
      }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return{};
        }
        solve(0,digits);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna