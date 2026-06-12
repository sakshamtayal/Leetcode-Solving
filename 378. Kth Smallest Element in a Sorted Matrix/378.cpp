class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        vector<int> a;
        for(int i=0;i<m.size();++i){
            for(int j=0;j<m.size();++j){
                a.push_back(m[i][j]);
            }
        }
        sort(a.begin(),a.end());
        return a[k-1];
    }
};