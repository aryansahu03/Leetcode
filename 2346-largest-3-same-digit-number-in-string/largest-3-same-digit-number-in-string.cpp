class Solution {
public:
    string largestGoodInteger(string num) {
        string result = "";
        for(int i=0 ; i+2 < num.length() ; i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                string tri = num.substr(i,3);
                if(tri > result) result = tri;
            }
        }
        return result;
    }
};