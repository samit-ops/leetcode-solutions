/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next= head;
        ListNode* current = head;
        ListNode* prev = dummy;
        while(current!=NULL){
            if(current->next!=NULL && current->val == current->next->val){
                int duplicate  = current->val;
                while(current!= NULL && current->val == duplicate){
                    current = current->next;
                }
                prev->next = current;
            }
            else{
                prev = current;
                current = current->next;
            }
        }
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna