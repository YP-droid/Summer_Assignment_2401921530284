class Solution {
public:
    int evalRPN(vector<string>& t) {
        //if we encounter an operator, remove 2 no. from stk
        stack<int>s;
        int ans=0;
        for(string c:t)
        {
            ans=0; //start each calc from start as we are pushing updated ans at each operator encountered
            if(c=="+")
            {
                int a = s.top();s.pop();
                int b = s.top();s.pop();
                ans += a+b;
                s.push(ans);
            }
            else if(c=="-")
            {
                int a = s.top();s.pop();
                int b = s.top();s.pop();
                ans += b-a;
                s.push(ans);
            }
            else if(c=="*")
            {
                int a = s.top();s.pop();
                int b = s.top();s.pop();
                ans += a*b;
                s.push(ans);
            }
            else if(c=="/")
            {
                int a = s.top();s.pop();
                int b = s.top();s.pop();
                ans += b/a;
                s.push(ans);
            }
            //number
            else
            {
                s.push(stoi(c));
            }
        }
        return s.top();
    }
};