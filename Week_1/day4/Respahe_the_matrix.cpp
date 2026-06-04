class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        if(row*col!=r*c)return mat;
        vector<vector<int>>ans(r,vector<int>(c));
        //to set elements in new matrix
        int r1=0; 
        int c1=0;
        for(int i = 0;i<row;i++)
        {
            for(int j = 0;j<col;j++)
            {
                //if current column is full then change row 
                if(c1>=c)
                {
                    r1++;
                    c1=0;
                }
                ans[r1][c1]=(mat[i][j]);
                c1++; 
            }
        }
        return ans;
    }
};