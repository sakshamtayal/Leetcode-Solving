class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int ans = 0 , k =0;
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        for(int i=0;i<p.size();++i){
            for(int j=k;j<t.size();++j){
                if(t[j] >= p[i]){
                    ans ++;
                    t[j] = 0;
                    k = j+1;
                    break;
                }
            }
        }
        return ans;
    }
};