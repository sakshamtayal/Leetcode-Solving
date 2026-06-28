class Solution {
public:
    long long maxSum(vector<int>& n, int k, int m) {
        sort(n.begin(),n.end());
        vector<int> a;
        for(int i=0;i<k;++i){
            a.push_back(n[n.size()-1-i]);
        }
        long long int ans = 0;
        for(int i=0;i<a.size();++i){
            if(m>0){
                long long int b = (long long)m * a[i];
                ans += b;
            }else{
                long long int c = a[i];
                ans += c;
            }
            m--;
        }
        return ans;
    }
};