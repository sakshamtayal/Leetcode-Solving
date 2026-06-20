class Solution {
public:
    vector<int> getRow(int n) {
          vector<vector<int>> ans;
        vector<int> a ;
        a.push_back(1);
        ans.push_back(a);
        if(n == 0){
            return ans[0];
        }
        for(int i=1;i<=n;++i){
            a.clear();
            a.push_back(1);
            for(int j=0;j<ans[i-1].size()-1;++j){
                a.push_back(ans[i-1][j] + ans[i-1][j+1]);
            }
            a.push_back(1);
            ans.push_back(a);
        }
        return ans[n];
    }
};