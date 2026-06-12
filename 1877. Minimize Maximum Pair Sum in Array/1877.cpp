class Solution {
public:
    int minPairSum(vector<int>& n) {
        if(n.size()==2){
            return n[0] + n[1] ;
        }
        sort(n.begin(),n.end());
        int max = 0;
        for(int i=0 , j=n.size()-1;i<j;++i , --j){
            if(n[i] + n[j] > max){
                max = n[i] + n[j];
            }
        }
        return max;
    }
};