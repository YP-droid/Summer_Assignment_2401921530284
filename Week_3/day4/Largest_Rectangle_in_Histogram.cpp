class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int area = 0;
        vector<int>left(h.size()),right(h.size());
        stack<int>s;
        // nearest smaller height on left ,store idx

        for(int i=0;i<h.size();i++)
        {
            while(!s.empty() and h[s.top()]>=h[i])s.pop();
            left[i] = s.empty()?-1:s.top();
            s.push(i);
        }

        while(!s.empty())s.pop(); //empty the stk for reuse

        //nearest smaller element on right
        for(int i=h.size()-1;i>=0;i--)
        {
            while(!s.empty() and h[s.top()]>=h[i])s.pop();
            right[i] = s.empty()?h.size():s.top();
            s.push(i);
        }

        //calc area using height of each column
        for(int i=0;i<h.size();i++)
        {
            int w = right[i] - left[i] - 1;  //width
            area = max(area,w*h[i]); 
        }

        return area;
    }
};