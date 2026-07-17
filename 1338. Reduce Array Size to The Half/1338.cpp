class Solution {
public:
    int minSetSize(vector<int>& n) {
        int m = *max_element(n.begin(),n.end());
        vector<int> f(m+1,0);
        for(int i=0;i<n.size();++i){
            f[n[i]]++;
        }
        sort(f.begin(),f.end());
        int x = 0 , ans = 0 , c = n.size() / 2;
        for(int i=f.size()-1;i>=0;--i){
            x += f[i];
            ans++;
            if(x >= c){
                break;
            }
        }
        return ans;
    }
};