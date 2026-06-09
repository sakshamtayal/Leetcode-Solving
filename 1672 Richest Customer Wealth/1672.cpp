class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        vector<int> ans(a.size(),0) ;
        for(int i=0;i<a.size();++i){
            for(int j=0;j<a[i].size();++j){
                ans[i] += a[i][j] ;
            }
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};