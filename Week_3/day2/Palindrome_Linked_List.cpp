class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        //store entire ll in string then check 
        string s;
        ListNode* h=head;
        //create string
        string c;
        while(h)
        {
            c=to_string(h->val);
            s+=c;
            h=h->next;
        }
        cout<<s;
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            if(s[left]!=s[right])return false;
            left++;right--;
        }
        return true;
    }
};