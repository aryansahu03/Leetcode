class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long m = (long long)rowIndex;
        vector<int> v;
        long long curr = 1;
        for(long long i=0 ; i<=m ; i++){
            v.push_back((int)curr);
            curr = curr * (m-i)/(i+1);
        
        }
        return v;
    }
};