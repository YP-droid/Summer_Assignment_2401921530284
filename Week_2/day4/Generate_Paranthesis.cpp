class Solution {
public:
    void solve(int open,int close,string s,int n,vector<string>&ans)
    {
        //pair ready
        if(open==close && open+close==n*2)
        {
            ans.push_back(s);return;
        }
        if(open<n) solve(open+1,close,s+"(",n,ans);  //if open bracket<n add open 
        if(close<open) solve(open,close+1,s+")",n,ans);  //if close<open, ( can be closed
    }   
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(0,0,"",n,ans);
        return ans;
    }

};