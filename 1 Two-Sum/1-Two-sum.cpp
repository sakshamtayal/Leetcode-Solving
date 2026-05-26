class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a = -1 , b = -1 ;
        for(int i=0; i < nums.size() - 1 ; ++i){
            for(int j=i+1; j < nums.size() ; ++j){
                if(nums[i] + nums[j] == target){
                    a = i ;
                    b = j ;
                    break;
                }
                if (a > -1 and b > -1 ){
                    break ;
                }
            }
        }
        vector<int> v = {a , b} ;
        return v;
    }
};