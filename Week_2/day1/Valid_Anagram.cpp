class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        
        //build map
        
        for(char c:s)
        {
            m[c]++;
        }

        //check if t can be made

        for(char c:t)
        {
            if(m[c]==0)return false;
            m[c]--;
        }

        //check if s had more chars

        for(auto&[_,v]:m)
        {
            if(m[_]>0)return false;
        }
        return true;
    }
};