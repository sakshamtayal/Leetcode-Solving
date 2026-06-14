class Solution {
public:
    long long maximumMedianSum(vector<int>& n) {
        sort(n.begin(),n.end());
        long long int ans = 0;
        for(int i = 1;i<=n.size()/3;++i){
            ans += n[n.size() - 2*i];
        }
        return ans;
    }
};