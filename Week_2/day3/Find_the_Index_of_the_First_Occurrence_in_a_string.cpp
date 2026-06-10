class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        if(n>h)return -1;
        int start=0;
        for(int i=0;i<h;i++)
        {
            bool flag = 1;
            for(int j=0;j<n;j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)return i;
        }
        return -1;
    }
};