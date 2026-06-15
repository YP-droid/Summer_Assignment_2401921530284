class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        //store nodes in stk first as it is lifo , perfect fro reversing stuff
        if(head==nullptr)return head;
        stack<ListNode*> s;
        ListNode* ptr=head;
        while(ptr){
            s.push(ptr);ptr=ptr->next;
        }
        ListNode* newhead =  s.top();
        s.pop();
        ListNode* curr = newhead;
        while(!s.empty()){
            curr->next=s.top();s.pop();curr=curr->next;
        }
        curr->next=nullptr;
        return newhead;
    }
};