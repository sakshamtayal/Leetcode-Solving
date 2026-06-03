class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int min = nums.size() , max = -1 ;
        for(int i=0;i<nums.size();++i){
            if(nums[i] == target){
                if(i>max){
                    max = i;
                }
                if(i<min){
                    min = i;
                }
            }
        }
        vector<int> ans;
        ans.push_back(min);
        ans.push_back(max);
        if(ans[1] == -1){
            ans[0] = -1 ;
        } 
        return ans;
    }
};