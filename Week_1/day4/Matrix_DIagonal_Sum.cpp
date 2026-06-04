class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        //square matrix means row size = col size
        int ans=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<row;j++)
            {
                //primary diagonal i=j
                if(i==j)ans+=mat[i][j];
                //secondary diagonal i+j will be equal to row size - 1 as we start indexing from 0
                else if(i+j == row-1 )ans+=mat[i][j];
            }
        }
        return ans;
    }
};