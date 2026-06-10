class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        //2s helps in finding all possible rotation of s
        //we are removing first and last char 
        //we do this to remove s itself i.e. trivial rotation  
        string s1 = s+s;
        return s1.substr(1,s1.size()-2).find(s)!=string::npos;
    }
};