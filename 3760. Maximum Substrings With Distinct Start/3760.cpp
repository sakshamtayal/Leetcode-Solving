class Solution {
public:
    int maxDistinct(string s) {
        vector<int> cn(26,0);
        for(int i=0;i<s.length();++i){
            cn[s[i]-'a']++;
        }
        int ans = 0;
        for(int i=0;i<26;++i){
            if(cn[i] > 0){
                ans++;
            }
        }
        return ans;
    }
};