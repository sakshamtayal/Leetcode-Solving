class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> c1(1001,0);
        vector<int> c2(1001,0);
        for(int i=0;i<nums1.size();++i){
            c1[nums1[i]] = 1;
        }
        for(int i=0;i<nums2.size();++i){
            c2[nums2[i]] = 1;
        }
        vector<int> ans;
        for(int i=0;i<1001;++i){
            if(c1[i] == 1 and c2[i] == 1){
                ans.push_back(i);
            }
        }
        return ans;
      
       
        
    }
};