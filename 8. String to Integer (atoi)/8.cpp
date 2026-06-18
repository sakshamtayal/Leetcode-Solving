class Solution {
public:
    bool is(char x){
        if(x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' || x == '7' || x == '8' || x == '9' || x == '0'){
            return true;
        }
        return false;
    }
    int myAtoi(string s) {
        long long int ans = 0 , p = 1 , k = 0;
        for(int i=0;i<s.length();++i){
            if(s[i] == ' ' && k == 0){
                continue;
            }
            if(s[i] == '-'){
                if(k == 0){
                    p = -1;
                    k = 1;
                    continue;
                }else if(k==1){
                    break;
                }
            }
            if(s[i] == '+' && k == 0){
                k = 1;
                continue;
            }
            if(is(s[i])){
                if(p == 1 && 2147483647 <= ans*10 + (s[i] - '0')){
                    return 2147483647;
                }
                if(p < 0 && 2147483648 <= ans*10 + (s[i] - '0')){
                    return 2147483648*p;
                }
                ans = ans*10 + (s[i] - '0') ;
                k = 1;
            }else{
                break;
            }
        }
        return ans*p;
    }
};