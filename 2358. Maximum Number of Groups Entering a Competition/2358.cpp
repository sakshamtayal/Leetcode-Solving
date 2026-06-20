class Solution {
public:
    int maximumGroups(vector<int>& g) {
        int k = g.size() , p = 0;
        for(int i=1;i<k;++i){
            p += i;
            if(p==k){
                return i;
            }if(p>k){
                return i-1;
            }
        }
        return 1;
    }
};