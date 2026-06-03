class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()<3){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1] != nums[nums.size()-3]){
            return nums[nums.size()-1] ;
        }
        int i=0;
        while(i<nums.size()){
            if(nums[i] == nums[i+2]){
                i += 3;
            }
            if(i+2 < nums.size()){
                if(nums[i] != nums[i+2]){
                    break;
                }
            } else{
                i++;
            }
        }
        return nums[i];
    }
};