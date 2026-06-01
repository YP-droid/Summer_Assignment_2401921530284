class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int prev=1;
        
        //prev holds the position for next unique element
        //curr is used to traverse the array

        for(int curr=1;curr<nums.size();curr++){
        
            if(nums[prev-1]!=nums[curr]){ //unique number found
                nums[prev] = nums[curr];  //place unique number in place of prev
                prev++;                   //update prev
            }
        
        }
        return prev;  //position of prev is number of unique element in array
    }
};