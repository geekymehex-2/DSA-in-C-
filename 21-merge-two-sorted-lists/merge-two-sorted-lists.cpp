
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* dummy = new ListNode(-1);
        ListNode* i = a;
        ListNode* j = b;
        ListNode* k = dummy;
        while(i != NULL && j != NULL){
            if(i->val < j->val){
                k->next = i;
                i = i->next;
            }
            else{
                k->next = j;
                j = j->next;
            }
            k = k->next;
        }
        if(i == NULL) k->next = j;
        else k->next = i;
        return dummy->next;
    }
};