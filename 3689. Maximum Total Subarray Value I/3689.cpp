class Solution {
public:
    long long maxTotalValue(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        return ((long long)k*(n[n.size()-1]-n[0]));
    }
};