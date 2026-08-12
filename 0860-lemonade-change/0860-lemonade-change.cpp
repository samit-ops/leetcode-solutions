class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int i =0;i<bills.size();i++){
            if(bills[i] == 5){
                five++;
            }
            else if(bills[i] == 10){
                if(five){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }
            else{
                if(five && ten){
                    five--;
                    ten--;
                }
                else if (five >= 3){
                    five -= 3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna