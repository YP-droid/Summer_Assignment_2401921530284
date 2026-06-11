class Solution {
public:
    string solve(string &s,int &i)
    {
        string result = "";
        int num=0;
        while(i<s.size())
        {
            char c = s[i];
            if(isdigit(c))
            //if num is >9. we need to extract it
            {
                num = num*10+(c-'0');
                i++;
            }
            else if(c=='[')
            //subproblem
            {
                i++;
                string inner = solve(s,i);
                for(int k=0;k<num;k++)result+=inner;
                num=0;
            }
            else if(c==']')
            {
                i++;
                return result; //a subproblem completed
            }
            else
            {
                result+=c;  //normal character
                i++;
            }
        }
        return result;
    }

    string decodeString(string s) {
        int i=0;
        return solve(s,i);
    }
};