class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        //move non zero to front

        int pos = 0; //positon to put non 0 nums
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0) //non 0 found
            {
                swap(nums[i],nums[pos]);
                pos++; //shift pos by 1 as 1 non 0 has been placed correctly;
            }
        }
        
    }
};




/*

Moving zeroes to back :

This approach will also work and pass all test cases but O(n^2)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = nums.size()-1; //position for zero
        int move = pos; //traversing array in reverse
        for(move;move>=0;move--)
        {
            if(nums[move]==0)//found 0
            {
                int j=move; //dont modify move
                while(j<nums.size()-1) //if 0 is already at last pos , we dont do anything
                {
                    if(nums[j+1]!=0)swap(nums[j],nums[j+1]);
                    j++;
                }
                pos--; //we placed 1 zero in its correct place, so change position by 1
            }
        }
    }
};
*/