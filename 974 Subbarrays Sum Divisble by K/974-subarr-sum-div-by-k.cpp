class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> v(nums.size(),0);
        for(int i=0; i < nums.size() ;++i){
          if(i > 0) {
                 v[i] = nums[i] + v[i-1] ;
          } else{
            v[i] = nums[i];
            }
        }
        for(int i=0; i < nums.size() ;++i){
            v[i] %= k ;
            if(v[i] < 0){
                v[i] += k;
            }
        }
        vector<int> rem(k ,0);
        rem[0] = 1 ;
        for(int i=0;i < nums.size();++i){
            rem[v[i]]++;
        }
        int ans = 0;
        for(int i=0;i<k;++i){
            if(rem[i] > 1 ){
                ans += rem[i]*(rem[i] - 1) / 2 ;
            }
        }
        return ans;
    }
};