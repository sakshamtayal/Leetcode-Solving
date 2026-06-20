class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        vector<int> a ;
        a.push_back(1);
        ans.push_back(a);
        if(n == 1){
            return ans;
        }
        for(int i=1;i<n;++i){
            a.clear();
            a.push_back(1);
            for(int j=0;j<ans[i-1].size()-1;++j){
                a.push_back(ans[i-1][j] + ans[i-1][j+1]);
            }
            a.push_back(1);
            ans.push_back(a);
        }
        return ans;
    }
};