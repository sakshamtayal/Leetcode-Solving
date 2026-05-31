class Solution {
public:
    string reverseWords(string s) {
        //initiation of helper string
        string h ="";
        vector<string> ans;
        // pushing into vector
        for(int i=0;i<s.length();++i){
            //handle blank space
            if(s[i] == ' '){
                if(h.length() > 0){
                    ans.push_back(h);
                    h = "" ;
                }else{
                    continue;
                }
            } else{
                h += s[i] ;
            }
            
            if(i == s.length() - 1 and !h.empty()){
                ans.push_back(h);
            }
        }
        string f = "";
        f += ans[ans.size()-1] ;
        for(int i = ans.size() - 2; i>=0 ;--i){
                 f += " " + ans[i] ;            
        }
        return f;
    }
};