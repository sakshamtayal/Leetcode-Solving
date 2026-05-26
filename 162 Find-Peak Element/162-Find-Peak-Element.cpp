class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        long long int ans  ;
        int idx ;
        ans = -2147483648;
        for(int i=0; i < nums.size() ; ++i){
            if(nums[i] >= ans ){
                ans = nums[i] ;
                idx = i ;
            }
        }
        return idx ;
    }
};