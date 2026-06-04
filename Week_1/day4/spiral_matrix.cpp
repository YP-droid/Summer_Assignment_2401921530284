class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.empty())return ans;
        //we need to set limit , begin and end for both row and col
        int beginrow = 0;
        int endrow = matrix.size()-1;
        int begincol = 0;
        int endcol = matrix[0].size()-1;
        

        while(beginrow <= endrow && begincol <= endcol){
            //traverse right
            for(int i=begincol; i<=endcol; i++){
                ans.push_back(matrix[beginrow][i]);
            }
            beginrow++;
            //traverse down
            for(int i=beginrow; i<=endrow; i++){
                ans.push_back(matrix[i][endcol]);
            }
            endcol--;
            //traverse left
            if(beginrow<=endrow){
                for(int i=endcol; i>=begincol; i--){
                    ans.push_back(matrix[endrow][i]);
                }
            }
            endrow--;
            //traverse up
            if(begincol<=endcol){
                for(int i=endrow; i>=beginrow; i--){
                    ans.push_back(matrix[i][begincol]);
                }
            }
            
            begincol++;
        }
        return ans;

    }
};