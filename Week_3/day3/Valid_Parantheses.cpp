class Solution {
public:
    bool isValid(string s) {
        //every opening bracket must have a closing one
        stack<char>stk;
        for(char c:s)
        {
            if(c=='{' or c=='(' or c=='[')stk.push(c);
            else if(c=='}')
            {
                if(stk.empty())return false;
                else if(stk.top()!='{')return false;
                else if (stk.top()=='{')stk.pop();
            }
            else if(c==')')
            {
                if(stk.empty())return false;
                else if(stk.top()!='(')return false;
                else if (stk.top()=='(')stk.pop();
            }
            else if(c==']')
            {
                if(stk.empty())return false;
                else if(stk.top()!='[')return false;
                else if (stk.top()=='[')stk.pop();
            }
        }
        return stk.empty();
    }
};