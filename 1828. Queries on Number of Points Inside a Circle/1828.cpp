class Solution {
public:
    int d(int x, int y, int a, int b){
        return((x-a)*(x-a) + (y-b)*(y-b));
    }
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int> ans(q.size(),0);
        for(int i=0;i<q.size();++i){
            for(int j=0;j<p.size();++j){
                if(d(q[i][0],q[i][1],p[j][0],p[j][1]) <= q[i][2]*q[i][2]){
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};