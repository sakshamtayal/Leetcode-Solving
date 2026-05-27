class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long x = 1;
        int patches = 0;
        int i = 0;
        while(x <= n){
            if(i<nums.size() and nums[i] <= x){
                x += nums[i] ;
                i++;
            }
            else {
                x += x ;
                patches++;
            }
        }
        return patches;
    }
};