class Solution {
public:
    void rotate(vector<vector<int>>& m ){
        vector<vector<int>> ans = m ;
        for(int i=0;i<m.size();++i){
            for(int j=0;j<m.size();++j){
                ans[j][m.size()-1-i] = m[i][j];
            }
        }
        m = ans;
    }
};