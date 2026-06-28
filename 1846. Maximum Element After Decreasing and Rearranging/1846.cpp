class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& n) {
        if(n.size()==1){
            return 1;
        }
        sort(n.begin(),n.end());
        n[0] = 1;
        for(int i=0;i<n.size()-1;++i){
            if(n[i+1]-n[i]>1){
                n[i+1] = n[i] + 1;
            }
        }
        return n[n.size()-1];
    }
};