/*
idea:
outer loop = s
inner loop  = t
if we find the earliest element matching x where x:s, break
we will store that idx , and now check for next x after this idx
we will carry a count
if count == s.size() true
else false 
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start = 0;
        int count=0;
        for(int i=0;i<s.size();++i)
        {
            if(count!=i)break;
            for(int j=start;j<t.size();++j)
            {
                if(t[j]==s[i])
                {
                    start = ++j;
                    ++count;
                    break;
                }
            }
        }
        if(count==s.size())return true;
        return false;
    }
};