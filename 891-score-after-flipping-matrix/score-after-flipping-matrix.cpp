class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        //making the first column all 1's
        for(int i=0 ; i<rows ; i++){
            if(grid[i][0]==0){ // flip row
                for(int j=0; j<cols ;j++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        // flip the columns where no0 > no1
        for(int j=1 ; j<cols ; j++){
            int no0 = 0;
            int no1 = 0;
            for(int i=0 ; i<rows ; i++){
                if(grid[i][j]==0) no0++;
                else no1++;
            }
            if(no0>no1){ // flip column
                for(int i=0 ; i<rows ; i++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        int score = 0;
        for(int i=0 ; i<rows ; i++){
            int x=1;
            for(int j=cols-1 ; j>=0 ; j--){
                score += grid[i][j]*x;
                x *= 2;
            }
        }
        return score;
    }
};