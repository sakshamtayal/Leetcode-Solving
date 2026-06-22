class Solution {
public:
    string customSortString(string o, string s) {
        string ans = "";
        for(int i=0;i<o.length();++i){
            char x = o[i];
            for(int j=0;j<s.length();++j){
                if(s[j] == x){
                    ans += x;
                    s[j] = '#';
                }
            }
        }
        for(int i=0;i<s.length();++i){
            if(s[i] != '#'){
                ans += s[i];
            }
        }
        return ans;
    }
};