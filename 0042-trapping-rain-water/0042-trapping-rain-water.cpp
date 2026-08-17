class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        // Previous Greatest Element Array
        int pge[n]; // Previous Greatest Element
        pge[0] = -1;
        int max = height[0];
        for(int i=1 ; i<n ; i++){
            pge[i] = max;
            if(max < height[i]) max = height[i];
        }
        // Next Greatest Element Array --> pge as next
        pge[n-1] = -1;
        max = height[n-1];
        for(int i=n-2 ; i>=0 ; i--){
            if(max < pge[i]) pge[i] = max;
            if(max < height[i]) max = height[i]; 
        }
        
        // Calculating Water
        int water = 0;
        for(int i=1; i<n-1 ; i++){
            if(height[i]<pge[i]){
                water += (pge[i] - height[i]);
            }
        }
        return water;
    }
};