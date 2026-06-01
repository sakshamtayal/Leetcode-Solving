class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int p = 0 , n = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i] == 1){
                n++;
            } else{
                if(n>p){
                    p = n;
                    n = 0;
                } else{
                    n = 0;
                }
            }
        }
        if(p>n){
            return p;
        }
        return n;
    }
};