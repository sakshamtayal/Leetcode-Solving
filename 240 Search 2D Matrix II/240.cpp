class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int r = m.size() , c = m[0].size() ;
        for(int i=0;i<r;++i){
            if(t <= m[i][c-1] and t>= m[i][0]){
                for(int j=0;j<c;++j){
                    if(m[i][j] == t){
                        return true;
                    }
                    if(m[i][j] > t){
                        break;
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