class Solution {
public:
    vector<int> sortByBits(vector<int>& n) {
        vector<vector<int>> h;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();++i){
            int b = __builtin_popcount(n[i]);
            h.push_back({b,n[i]});
        }
        sort(h.begin(),h.end());
        vector<int> ans;
        for(int i=0;i<h.size();++i){
            ans.push_back(h[i][1]);
        }
        return ans;
    }
};