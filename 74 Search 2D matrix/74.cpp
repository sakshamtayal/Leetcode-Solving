class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int r = m.size();
        int c = m[0].size();
        for(int i=0;i<r;++i){
            if(m[i][0]<=t and m[i][c-1]>=t){
                for(int j=0;j<c;++j){
                    if(m[i][j] == t){
                        return true;
                    }
                }
            }
            if(m[i][0]>t){
                return false;
            }
        }
        return false;
    }
};