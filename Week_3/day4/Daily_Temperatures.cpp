class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>v(t.size());
        stack<int>s;
        unordered_map<int,int>m;
        for(int i=t.size()-1;i>=0;i--)
        {
            //update stk
            while(!s.empty() and t[i]>=s.top())s.pop();
            if(!s.empty())
            {
                if(s.top()>t[i])v[i] = m[s.top()]-i;
                else v[i]=0;
            }
            m[t[i]]=i; //record idx
            s.push(t[i]);
        }
        return v;
    }
};