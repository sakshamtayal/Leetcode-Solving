class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for(int i=0;i<s.length();++i){
            if(s[i] - 'a' >= 0){
                ans.push_back(s[i]);
            }
            if(s[i] == '*'){
                if(ans.length()>0){
                    ans.pop_back();
                }
            }
            if(s[i] == '#'){
                ans += ans;
            }
            if(s[i] == '%'){
                string k = "";
                for(int j=ans.length()-1;j>=0;--j){
                    k += ans[j];
                }
                ans = k;
            }
        }
        return ans;
    }
};