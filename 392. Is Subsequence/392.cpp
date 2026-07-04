class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0){
            return true;
        }
        int k = 0;
        int x = s.length();
        for(int i=0;i<t.length();++i){
            if(s[k]==t[i]){
                if(k == x-1){
                    return true;
                }
                k++;
            }
        }
        return false;
    }
};