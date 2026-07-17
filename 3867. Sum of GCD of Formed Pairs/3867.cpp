class Solution {
public:
    long long gcdSum(vector<int>& n) {
        vector<int> p;
        p.push_back(n[0]);
        int h = n[0];
        for(int i=1;i<n.size();++i){
            if(n[i] > h){
                h = n[i];
            }
            p.push_back(gcd(n[i],h));
        }
        long long ans = 0;
        sort(p.begin(),p.end());
        int x = p.size() / 2;
        int y = p.size() - 1;
        for(int i=0;i<x;++i){
            ans += gcd(p[i],p[y-i]);
        }
        return ans;
    }
};