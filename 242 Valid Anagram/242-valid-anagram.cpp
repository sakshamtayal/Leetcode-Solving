class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> sc(27,0) ;
        vector<int> tc(27,0) ;
        if(s.length() != t.length()){
            return false;
        }
        for(int i=0; i<s.length();++i){
            int x = s[i] - 'a';
            int y = t[i] - 'a';
            sc[x]++;
            tc[y]++;
        }
        for(int i=1;i<27;++i){
            if(sc[i] != tc[i]){
                return false;
            }
        }
        return true;
    }
};