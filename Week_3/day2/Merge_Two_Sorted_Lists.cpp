class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1=list1;
        ListNode* h2=list2;
        ListNode* dummy = new ListNode(); // this is used to return start of ans LL
        ListNode* curr = dummy; //create LL
        while(h1 and h2)
        {
            if(h1->val>h2->val)
            {
                curr->next = h2;
                curr=curr->next;
                h2=h2->next;
            }
            else 
            {
                curr->next = h1;
                curr=curr->next;
                h1=h1->next;
            }
        }
        //if h1 or h2 remains
        curr->next = (h1) ? h1 : h2;
        return dummy->next;
    }
};