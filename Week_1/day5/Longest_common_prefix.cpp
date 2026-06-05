class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //compare based on dictionary ordering
        sort(strs.begin(),strs.end());//arrange in dictionary order
        string first = strs[0];
        string last = strs[strs.size()-1];
        int len = min(first.size(),last.size());
        string ans;
        for(int i=0;i<len;i++)
        {
            if(first[i]!=last[i])
            {
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};

/*

another approach comparing every element

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0]; //pick the first guy as ans 
        int flag=0;  //to check which element is smaller
        string temp;
        for(int i = 1;i<strs.size();i++)
        {
            temp = ans;
            //if curr is smaller
            if(min(strs[i].size(),ans.size()) == strs[i].size())
            {
                flag=1;
            }
            else flag=0;
            for(int j=0;j<min(strs[i].size(),ans.size());j++)
            {
                if(strs[i][j]!=ans[j] and flag==1)
                {
                    ans = strs[i].substr(0,j);
                }
                else if(strs[i][j]!=ans[j] and flag==0)//ans was smaller
                {
                    ans = ans.substr(0,j);
                }
            }
            
            if(temp == ans and flag==1)//ans still same when curr was smaller in size
            {
                ans = strs[i].substr(0,strs[i].size());
            }
            cout<<ans<<'\n';
        }
        return ans;
    }
};
*/