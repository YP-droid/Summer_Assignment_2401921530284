class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //this is kadanes algo
        int maxval = -1e9; //we use it to store the maxsum observed sofar
        int sum = 0; //maintain at each point
        for(int x:nums)
        {
            sum+=x;
            if(sum>maxval)maxval=sum;
            
            //no need to carry negative number or subarrays as they take value away from sum
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxval;
    }
};