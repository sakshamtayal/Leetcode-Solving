class Solution {
public:
    long long getDescentPeriods(vector<int>& n) {
        long long int ans = 0;
        vector<int> v ;
        for(int i=0;i<n.size();++i){
            if(v.size() == 0){
                v.push_back(n[i]);
            }else {
                if(n[i] + 1 == n[i-1]){
                    v.push_back(n[i]);
                }else{
                    long long int k = v.size();
                    ans += max((k/2)*(k+1) , ((k+1)/2)*k);
                    v.clear();
                    v.push_back(n[i]);
                }
            }
        }
        long long int k = v.size();
        ans += max((k/2)*(k+1) , ((k+1)/2)*k);
        return ans;
    }
};