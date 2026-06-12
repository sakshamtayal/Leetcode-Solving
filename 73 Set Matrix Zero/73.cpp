class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int> a , b ;
        for(int i=0;i<m.size();++i){
            for(int j=0;j<m[0].size();++j){
                if(m[i][j] == 0){
                    a.push_back(i);
                    b.push_back(j);
                }
            }
        }
        for(int i=0;i<a.size();++i){
            for(int j=0;j<m[0].size();++j){
                m[a[i]][j] = 0;
            }
        }
        for(int i=0;i<b.size();++i){
            for(int j=0;j<m.size();++j){
                m[j][b[i]] = 0;
            }
        }
    }
};