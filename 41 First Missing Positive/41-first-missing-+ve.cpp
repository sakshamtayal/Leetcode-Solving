class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        int ans = 1;
        for(int i=0 ; i < nums.size() ; ++i){
            if(ans == nums[i]){
                ans++;
            }
        }
        return ans;
    }
};