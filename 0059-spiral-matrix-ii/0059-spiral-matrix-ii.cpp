class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int x = 1;
        int minr = 0;
        int maxr = n-1;
        int minc = 0;
        int maxc = n-1;
        vector<vector<int>> ans(n, vector<int>(n));
        while(minr<=maxr && minc<=maxc){
            // For Right move --> minr row will be constant
            for(int j=minc ; j<=maxc ;j++){
                ans[minr][j] = x;
                x++;
            }
            minr++;
            if(minr > maxr || minc > maxc) break;
            // For down move --> maxc column will be constant
            for(int i=minr ; i<= maxr ; i++){
                ans[i][maxc] = x;
                x++;
            }
            maxc--;
            if(minr > maxr || minc > maxc) break;
            // For left move --> maxr row will be constant
            for(int j=maxc ; j>= minc ; j--){
                ans[maxr][j] = x;
                x++;
            }
            maxr--;
            if(minr > maxr || minc > maxc) break;
            // For up move --> minc column will be constant
            for(int i=maxr ; i>=minr ; i--){
                ans[i][minc] = x;
                x++;
            }
            minc++;
            if(minr > maxr || minc > maxc) break;
        }
        return ans;
    }
};