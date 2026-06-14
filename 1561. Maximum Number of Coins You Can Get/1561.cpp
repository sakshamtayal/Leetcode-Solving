class Solution {
public:
    int maxCoins(vector<int>& p) {
        sort(p.begin(),p.end());
        if(p.size() < 4){
            return p[1];
        }
        int ans = 0;
        for(int i=p.size()-2;i >= p.size()/3 ;i -= 2){
            ans += p[i];
        }
        return ans;
    }
};