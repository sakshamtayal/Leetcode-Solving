class Solution {
public:
    bool doesAliceWin(string s) {
        int n = 0 , b = 0 , e = 0;
        for(int i=0;i<s.length();++i){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                n++;
                if(i == 0){
                    b = 1;
                }
                if(i == s.length() - 1){
                    e = 1;
                }
            }
        }
        if(s.length()==1 && b==1){
            return true;
        }
        if(n%2 == 1){
            if(b==0 || e==0){
                return true;
            }
        }
        if(n == 0){
            return false;
        }
        if(n%2 == 1 && e == 1){
            return true;
        }
        return (n%2 == 0);
    }
};