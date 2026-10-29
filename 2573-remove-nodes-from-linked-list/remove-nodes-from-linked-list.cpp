
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*> st;
        while(temp != NULL){
            while(st.size() > 0 and (st.top())->val < temp->val) st.pop();
            st.push(temp);
            temp = temp->next;
        }
        ListNode* dummy = new ListNode(-1);
        temp = dummy;
        while(st.size() > 0){
            ListNode* top = st.top();
            st.pop();
            temp->next = top;
            temp = top;
        }
        temp->next = NULL;
        return reverse(dummy->next);
    }
};