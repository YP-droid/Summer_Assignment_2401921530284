class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h=head;
        //first count total nodes
        int count=0;
        while(h){
            count++;
            h=h->next;
        }
        int pos = count - n + 1;
        //reset h
        h=head; 
        if(pos == 1) //remove head
        {
            h=h->next;
            return h;
        }
        //reset h 
        h=head;
        int track=0;
        while(h)
        {
            track++;
            if((track+1)==pos)
            {
                h->next = h->next->next; //skip 1 node
                break;
            }
            h=h->next;
        }
        return head;
    }
};