class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        bool firstTime=true;
        int left=0,right=0;
        double sum = 0;
        double maxsum=0;
        while(right<nums.size())
        {
            if(firstTime)
            {
                for(right;right<k;right++)
                {
                    sum+=nums[right];
                    cout<<right<<'\n';
                }
                firstTime = false;
                maxsum=sum;right--; //after the for loop,right is incremented 1 more time 
                                    //ex : k=4, r=0,1,2,3 so far so good, r=4, loop breaks but we only include element till r=3 in our loop.
                                    //so r=4 is not included and in else we are doing r++, so after r=3 we process r=5 direectly. 
                                    //therefore we need r-- here
            }
            else
            {
                right++;
                if (right<nums.size())
                {
                cout<<right;
                sum-=nums[left];
                left++;
                sum+=nums[right];
                maxsum=max(maxsum,sum);
                }
                
            }
        }
        return maxsum/k;
    }
};