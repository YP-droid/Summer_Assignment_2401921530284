class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        //since we can have chars other than letters
        vector<int>lastseen(128,-1);
        int left=0;
        int len=0;
        for(int right=0;right<s.size();right++)
        {
            char curr = s[right];

            //if chars in in curr window
            if(lastseen[curr]>=left)
            {
                left = lastseen[curr]+1;
            }
            //chars lastseen position
            lastseen[curr]=right;
            len = max(len,right-left+1);   
        }
        return len;
    }
};