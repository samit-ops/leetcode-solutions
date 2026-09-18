class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry =0;
        while(l1 != NULL || l2 != NULL || carry != 0){
            int sum = carry ;
            if(l1 != NULL){
                sum+= l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            int digit = sum % 10;
            carry = sum / 10;

            temp->next = new ListNode(digit);
            temp = temp->next;
        }
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna