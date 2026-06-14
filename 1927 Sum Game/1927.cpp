class Solution {
public:
    bool sumGame(string s) {
        int l = 0 , r = 0 , a = 0 , b = 0;
        for(int i=0;i<s.length();++i){
            if(s[i] == '?'){
                if(i < s.length()/2){
                    l++;
                }else{
                    r++;
                }
            }else{
                if(i<s.length()/2){
                    a += s[i] - '0';
                }else{
                    b += s[i] - '0';
                }
            }
        }
        int d = a-b;
        int c = l-r;
        return(d*2 + c*9 != 0);
       
    }
};