class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        vector<vector<int>> ans;
        for(int i=0;i<m[0].size();++i){
            vector<int> h;
            for(int j=0;j<m.size();++j){
                h.push_back(m[j][i]);
            }
            ans.push_back(h);
        }
        return ans;
    }
};