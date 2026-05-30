class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<int>ans;
       ans.push_back(nums[0]);
       int j = 0;
       for(int i=1; i<nums.size();++i){
        if(nums[i] != ans[j]){
            ans.push_back(nums[i]) ;
            j++;
        }
       }
       if(ans.size()<3){
        return ans[ans.size() - 1] ;
       }

        return ans[ans.size() - 3];
        
    }
};