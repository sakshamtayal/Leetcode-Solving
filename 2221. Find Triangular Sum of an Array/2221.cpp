class Solution {
public:
    int triangularSum(vector<int>& n) {
        while(n.size()>1){
            for(int i=0;i<n.size()-1;++i){
                n[i] = (n[i] + n[i+1])%10;
            }
            n.pop_back();
        }
        return n[0];
    }
};