class Solution {
public:
    int myAtoi(string s) {
       int n = s.length();
       int i = 0;
       // Skipping leading spaces
       while(i<n && s[i] == ' '){
        i++;
       } 
       // sign check
       int sign = 1;
       if(i<n && (s[i] == '+' || s[i] == '-')){
        if(s[i] == '-') sign = -1;
        i++;
       }
       // convert digits
       long long num = 0;
       while(i<n && isdigit(s[i])){
        int digit = s[i] - '0';  // converting string digit into integer
        num = num*10 + digit;
        // manage overflow
        if(sign == 1 && num > INT_MAX) return INT_MAX;
        if(sign == -1 && -num < INT_MIN) return INT_MIN;
        i++;
       }
       return sign*num;
    }
};