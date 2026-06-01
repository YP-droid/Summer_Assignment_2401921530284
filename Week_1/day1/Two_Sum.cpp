class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        for each number , map its index to its compliment,i.e. each number is mapped to its compliment index
        EX:
        if we have a mapping 4-1 , this means 4 has its compliment at index 1.
        so we return current number i.e, 4 idx and the idx mapped to 4
        */

        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            int compliment = target-nums[i];
            if(m.count(nums[i]) == 1) //found compliment
            {
                return {m[nums[i]],i};
            }
            else m[compliment]=i;
        }
        return {};
    }
};