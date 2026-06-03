class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int i=1;
        if(nums[0] != nums[1]){
            ans.push_back(nums[0]);
        }
        if(nums[nums.size()-1] != nums[nums.size()-2]){
            ans.push_back(nums[nums.size()-1]) ;
        }
        while(i<nums.size() && ans.size()<3){
            if(i+1 < nums.size()){
                if(nums[i] != nums[i+1] and nums[i] != nums[i-1]){
                    ans.push_back(nums[i]);
                }
            }
            i+=1;
        }
        return ans; 
    }
};