#include<cmath>
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        //we need to find rect with largest size
        int left = 0; 
        int right = height.size()-1;
        int area = 0;
        
        while (left<right){
            //we need to pick smallest vertical bar of the two, to prevent water overflow
            int top = min(height[left],height[right]);
            int width = right-left;
            area = max(area,top*width);
            
            if(height[left]>height[right]){
                --right;
            }
            else{
                ++left;
            }
            }

        return area;
        
    }
};