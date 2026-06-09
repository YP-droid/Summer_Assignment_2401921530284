class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>s1(26,0);
        vector<int>p1(26,0);

        int s_len=s.size();
        int p_len=p.size();

        vector<int>result;

        if(p_len>s_len)return result; //no anagrams
        
        // add freq to arrays
        for(int i=0;i<p_len;i++)
        {
            p1[p[i]-'a']++;   //traverse respective array to p len 
            s1[s[i]-'a']++;
        }

        if(p1==s1)result.push_back(0);  //we found it in beginning


        //we traversed upto plen , so we start from it
        for(int i=p_len;i<s_len;i++)
        {
            //add curr letter and remove left most 
            s1[s[i]-'a']++;
            s1[s[i-p_len]-'a']--;

            if(s1==p1)result.push_back(i-p_len+1);
        }
        return result;
    }
};