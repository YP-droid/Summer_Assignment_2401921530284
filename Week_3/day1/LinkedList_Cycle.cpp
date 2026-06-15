class Solution {
public:
    bool hasCycle(ListNode *head) {
        //tortoise hare algo
        ListNode* slow=head;
        ListNode* fast=head;
        //slow moves 1 step

        //fast moves 2 steps and if they meet , we have a cycle
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
    }
};