class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int result = 1;
        sort(nums.begin(), nums.end());
        for(int i=1 ; i<=nums[0] ; i++){
            if(nums[0]%i == 0 && nums[n-1]%i == 0) result = i;
        }
        return result;
    }
};