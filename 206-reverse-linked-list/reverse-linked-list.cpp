
class Solution {
public:
    //Recursively
    ListNode* reverseList(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode* a = head->next;
        ListNode* newHead = reverseList(a);
        a->next = head;
        head->next = NULL;
        return newHead;
    }

//Itaratively
    // ListNode* reverseList(ListNode* head) {
    //     ListNode* curr = head;
    //     ListNode* prev = NULL;
    //     while(curr != NULL){
    //         ListNode* fwd = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = fwd;
    //     }
    //     return prev;
    // }
};