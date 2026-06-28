class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        vector<vector<int>> cn;
        for(int i=0;i<h.size();++i){
            cn.push_back({h[i],i});
        }
        sort(cn.begin(),cn.end());
        vector<string> ans;
        for(int i=cn.size()-1;i>=0;--i){
            int b = cn[i][1];
            ans.push_back(n[b]);
        }
        return ans;
    }
};