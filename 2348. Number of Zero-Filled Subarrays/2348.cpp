class Solution {
public:
    long long zeroFilledSubarray(vector<int>& n) {
        long long int ans = 0 , p = 0;
        for(int i=0;i<n.size();++i){
            if(n[i] == 0){
                p++;
            } else {
                ans += (p*(p+1))/2 ;
                p = 0;
            }
        }
        ans += (p*(p+1))/2;
        return ans;
    }
};