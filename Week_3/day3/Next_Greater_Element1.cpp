class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s; //serves as monotonic stk has the largest element on top
        unordered_map<int,int> m;  //maps each no. to their next greater element 
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<nums2[i]){
                s.pop();
            }
            m[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }
        //store ans
        vector<int> v;
        for(int num : nums1){
            v.push_back(m[num]);
        }
        return v;
    }
};