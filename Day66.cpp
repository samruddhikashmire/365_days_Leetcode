// Count Submatrices with Top-Left Element and Sum Less Than k
class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int r = grid.size();
        int c = grid[0].size();
        int count =0;
        for(int i=0;i<r;i++)
        {
             for(int j=1;j<c;j++)
             {
                 grid[i][j] += grid[i][j-1];
             }
        }
        for(int i=0;i<c;i++)
        {
             for(int j=1;j<r;j++)
             {
                 grid[j][i] += grid[j-1][i];
             }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j] <= k)
                count++;
            }
        }
        return count;
       
        
        
        
    }
       
    
};
