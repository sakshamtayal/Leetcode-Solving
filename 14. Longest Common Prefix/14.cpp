class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string t = "";
        if(s.size()==1){
            return s[0];
        }
        sort(s.begin(),s.end());
        if(s[0].length() == 0){
            return t;
        }
        for(int i=0;i<s[0].length();++i){
            if(s[0][i] == s[1][i] && s[0][i] == s[s.size()-1][i]){
                t += s[0][i];
            }else{
                break;
            }
        }
        return t;
    }
};