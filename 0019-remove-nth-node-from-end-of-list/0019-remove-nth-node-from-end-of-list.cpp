class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i =0 ; i<n; i++){
            fast = fast->next;
        }
        if(fast == NULL){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* deletenode = slow->next;
        slow->next = deletenode->next;
        delete deletenode;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna