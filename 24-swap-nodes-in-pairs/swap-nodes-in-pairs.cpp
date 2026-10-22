
class Solution {
public:
//1st method
ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* dummy = new ListNode(-1);
        ListNode* k = dummy;
        ListNode* i = a; //odd
        ListNode* j = b; //even
        while(i != NULL && j != NULL){
            k->next = j;
            k = k->next;
            j = j->next;;
            k->next = i;
            k = k->next;
            i = i->next;
            
        }
        if(i != NULL) k->next = i;
        else k->next = j;
        return dummy->next;
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);
        ListNode* temp1 = dummy1;
        ListNode* temp2 = dummy2;
        ListNode* temp = head;
        while(temp != NULL){
            temp1->next = temp;
            temp1 = temp1->next;
            temp = temp->next;
            if(temp != NULL){
                temp2->next = temp;
                temp2 = temp2->next;
                temp = temp->next;
            }
        }
        temp1->next = NULL;
        temp2->next = NULL;
        return mergeTwoLists(dummy1->next,dummy2->next);
    }

//2nd method
    // ListNode* swapPairs(ListNode* head) {
    //     if(head == NULL or head->next ==  NULL) return head;
    //     ListNode* a = head;
    //     ListNode* prev = NULL;
    //     while(a != NULL){
    //         ListNode* b = a->next;
    //         if(b == NULL){
    //             prev->next = a;
    //             break;
    //         }
    //         ListNode* fwd = b->next;
    //         b->next = a;
    //         if(prev != NULL) prev->next = b;
    //         else head = b;
    //         prev = a;
    //         a->next = NULL;
    //         a = fwd;
    //     }
    //     return head;
    // }
};