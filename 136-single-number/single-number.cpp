class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        for(int i=0 ; i<n ; i++){
            int x = nums[i];
            result ^= x;
        }
       return result;     
    }
};