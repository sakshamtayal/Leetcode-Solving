class Solution {
public:
    int maxSum(vector<vector<int>>& n) {
        int max = 0;
        for(int i=0;i<n.size()-2;++i){
            for(int j=0;j<n[0].size()-2;++j){
                int p = n[i][j] + n[i][j+1] + n[i][j+2];
                p += n[i+1][j+1];
                p += n[i+2][j] + n[i+2][j+1] + n[i+2][j+2];
                if(p > max){
                    max = p;
                }
            }
        }
        return max;
    }
};