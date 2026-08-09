class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL ||  head->next == NULL){
            return head;
        }
         vector<ListNode*>nodes;
         ListNode* temp = head;
         while(temp != NULL){
            nodes.push_back(temp);
            temp = temp->next;
         }
         sort(nodes.begin(),nodes.end(), [](ListNode* a , ListNode* b){
            return a->val < b->val;
         });
         for(int i=0 ; i < nodes.size()-1; i++){
            nodes[i]->next = nodes[i+1];
         }
         nodes[nodes.size()-1]->next = NULL;
         return nodes[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna