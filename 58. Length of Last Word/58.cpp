class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> cn;
        string t = "";
        for(int i=0;i<s.length();++i){
            if(s[i] == ' '){
                if(t.length()>0){
                    cn.push_back(t);
                }
                t ="";
            } else{
                t += s[i];
            }
        }
        if(t.length() > 0){
            cn.push_back(t);
        }
        return (cn[cn.size()-1].length());
    }
};