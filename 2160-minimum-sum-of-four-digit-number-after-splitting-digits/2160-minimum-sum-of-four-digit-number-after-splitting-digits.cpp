class Solution {
public:
    int minimumSum(int num) {
       int ones = num%10;
       num /= 10;
       int tens = num%10;
       num /= 10;
       int huns = num%10;
       num /= 10;
       int thous = num%10;
       // new1 + new2 = (min1X + min2Y)
       vector<int> v;
       v.push_back(ones);
       v.push_back(tens);
       v.push_back(huns);
       v.push_back(thous);
       sort(v.begin(),v.end());
       int new1 = v[0]*10 + v[2];
       int new2 = v[1]*10 + v[3];
       int result = new1 + new2;
       return result;
    }
};