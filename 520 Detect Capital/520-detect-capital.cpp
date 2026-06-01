class Solution {
public:
    bool detectCapitalUse(string s) {
        
        
        if(s.length() > 1){
            if((s[0] - 'a')>=0 and 0>(s[1] - 'a')){
            return false;
          } 
            int c;
            if(s[1] - 'a' >= 0){
                c = 1;
            }else{
                c = 0;
            }
            if(s.length()>2){
                for(int i=2;i<s.length();++i){
                    if(c>0 and s[i] - 'a' < 0){
                        return false;
                    }
                    if(c<1 and s[i] - 'a' >= 0){
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};