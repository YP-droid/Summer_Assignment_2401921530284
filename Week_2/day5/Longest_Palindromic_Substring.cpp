class Solution {
public:
    int expand(string s, int left, int right)
    {
        while(left>=0 and right<s.size() and s[left]==s[right]) //if palindrome so far , expand
        {
            left--;right++;
        }
        return right - left - 1;
    }

    string longestPalindrome(string s) {
        if(s.size()==0)return "";
        
        int start = 0;
        int end = 0;

        for(int i=0;i<s.size();i++)
        {
            int odd = expand(s,i,i);  //assume i is centre
            int even = expand(s,i,i+1);  //assume center is b/w i and i+1 , curr idx = left
            int maxlen = max(odd,even);

            if(maxlen > end-start)
            {
                //center is i
                start = i - (maxlen-1)/2;
                end = i + maxlen/2;
            }
        }
        //extract the palindrome
        return s.substr(start,end-start+1);
    }
};