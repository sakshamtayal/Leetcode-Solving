class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& n) {
        int m = 0;
        for(int i=0;i<n.size();++i){
            if(n[i][0] > m){
                m = n[i][0];
            }
            if(n[i][1] > m){
                m = n[i][1];
            }
        }
        vector<int> cn(m+1,-1);
        for(int i=0;i<n.size();++i){
            if(cn[n[i][1]] == -1){
                cn[n[i][1]] = 0;
            }
            cn[n[i][1]]++;
            if(cn[n[i][0]] == -1){
                cn[n[i][0]] = 0;
            }
        }
        vector<int> o , z;
        for(int i=0;i<cn.size();++i){
            if(cn[i] == 0){
                z.push_back(i);
            }
            if(cn[i] == 1){
                o.push_back(i);
            }
        }
        vector<vector<int>> ans;
        ans.push_back(z);
        ans.push_back(o);
       
        return ans;
    }
};