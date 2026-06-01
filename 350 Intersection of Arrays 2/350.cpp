class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> c1(1001,0);
        for(int i=0; i<nums1.size();++i){
            c1[nums1[i]]++;
        }
        vector<int> c2(1001,0);
        for(int i=0; i<nums2.size();++i){
            c2[nums2[i]]++;
        }
        vector<int> c3(1001,0);
        for(int i=0;i<1001;++i){
            if(c1[i]>=c2[i]){
                c3[i] = c2[i];
            } else{
                c3[i] = c1[i];
            }
        }
        vector<int> ans;
        for(int i=0;i<1001;++i){
            for(int j=0;j<c3[i];++j){
                ans.push_back(i);
            }
        }
        return ans;
    }
};