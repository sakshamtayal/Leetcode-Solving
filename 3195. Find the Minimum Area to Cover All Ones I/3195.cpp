class Solution {
public:
    int minimumArea(vector<vector<int>>& g) {
        int a = INT_MAX , b = 0 , c = INT_MAX , d = 0;
        for(int i=0;i<g.size();++i){
            for(int j=0;j<g[0].size();++j){
                if(g[i][j] == 1){
                    if(i<a){
                        a = i;
                    }
                    if(i>b){
                        b = i;
                    }
                    if(j<c){
                        c = j;
                    }
                    if(j>d){
                        d = j;
                    }
                }
            }
        }
        return (b-a+1)*(d-c+1);
    }
};