class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        
        //add strings acc to their sorted placement
        for(string s:strs)
        {
            string key=s;
            sort(key.begin(),key.end());
            m[key].push_back(s);
        }
        for(auto&[key,val]:m)
        {
            ans.push_back(val);
        }
        return ans;
    }
};