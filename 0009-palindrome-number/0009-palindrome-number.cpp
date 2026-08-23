class Solution {
public:
    bool isPalindrome(int x) {
        long long temp = x;
        long long reverse = 0;
        while(temp>0){
            long long a = temp%10;
            reverse = reverse*10 + a;
            temp = temp/10;
        }
        if(x<0) return false;
        else if(x == reverse) return true;
        else return false;
    }
};