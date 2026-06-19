class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;  //store idx
        vector<int>v;

        for(int i=0;i<nums.size();i++)
        {
            //remove out of window element . valid range is [i-k+1,i]
            if(!dq.empty() and dq.front()==i-k)dq.pop_front();

            //an older number which is also smaller will never be a max value
            while(!dq.empty() and nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }

            dq.push_back(i);

            //window completed
            if(i>=k-1)v.push_back(nums[dq.front()]);
        }
        return v;
    }
};

/*

slow but will work (queue + maxheap + unordered_map)

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //we need to return max element in each window
        vector<int>v;
        int maxi=-1e9;
        queue<int>q;
        priority_queue<int>p;
        unordered_map<int,int>m;

        //inital window
        for(int i=0;i<k;i++)
        {
            q.push(nums[i]);
            p.push(nums[i]);
            m[nums[i]]++;
        }   

        v.push_back(p.top());
        
        for(int i=k;i<nums.size();i++)
        {
            int x = q.front();q.pop();m[x]--;
            if(x==p.top())
            {
                p.pop();
            }
            q.push(nums[i]);
            p.push(nums[i]);
            m[nums[i]]++;
            //handle no. in maxheap which are no longer in window
            while(!p.empty() && m[p.top()]==0)
            {
                p.pop();
            }
            v.push_back(p.top());
        }
        return v;
    }
};
*/