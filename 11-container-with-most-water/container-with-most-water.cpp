class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;
        int i = 0;
        int j = n-1;
        while(i < j){
            int length = min(height[i],height[j]);
            int gap = j-i;
            int area = length * gap;
            maxArea = max(maxArea , area);
            if(height[i] <= height[j]) i++;
            else j--;
        }
        return maxArea;
    }
};