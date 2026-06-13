class Solution {
public:
    int countDigitOccurrences(vector<int>& n, int d) {
        int ans = 0;
        for(int i=0;i<n.size();++i){
            while(n[i]>0){
                if(n[i]%10 == d){
                    ans++;
                }
                n[i] /= 10;
            }
        }
        return ans;
    }
};