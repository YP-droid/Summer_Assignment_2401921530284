class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        
        //build map
        for(char c : magazine)m[c]++;

        //check if ransomNote is possible
        for(char c:ransomNote)
        {
            if(m[c]==0)return false;
            m[c]--;
        }
        return true;
    }
};