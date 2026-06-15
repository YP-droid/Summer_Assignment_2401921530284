class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //count no. of nodes and then stop at mid
        
        int length=0;
        ListNode* root = head;
        while(root)
        {
            length++;
            root=root->next;
        }
        root=head;
        int count=0;
        while(root)
        {
            if(count==(length/2))return root;
            root=root->next;
            count++;
        }
        return root;
    }
};