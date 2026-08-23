class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v(n,0);
        if(n%2==0){
            for(int i=0 ; i<n ; i=i+2){
                v[i] = (i+1);
                v[i+1] = -(i+1);
            }
        }
        else{
            for(int i=1 ; i<n ; i=i+2){
                v[i] = (i+1);
                v[i+1] = -(i+1);
            }
        }
        return v;
    }
};