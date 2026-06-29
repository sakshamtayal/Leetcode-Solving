class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>> ans;
        if(s.size() == 0){
            return ans;
        }
        vector<vector<string>> h;
        for(int i=0;i<s.size();++i){
            h.push_back({s[i],s[i]});
        }
        for(int i=0;i<h.size();++i){
            sort(h[i][0].begin(),h[i][0].end());
        }
        sort(h.begin(),h.end());
        vector<string> x;
        for(int i=0;i<h.size();++i){
            if(x.size()==0){
                x.push_back(h[i][1]);
                continue;
            }
            if(h[i][0] == h[i-1][0]){
                x.push_back(h[i][1]);
            }else{
                ans.push_back(x);
                x.clear();
                x.push_back(h[i][1]);
            }
        }
        if(x.size()>0){
            ans.push_back(x);
        }
        return ans;
    }
};