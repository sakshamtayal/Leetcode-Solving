class Solution {
public:
    int numOfStrings(vector<string>& p, string w) {
        int ans = 0;
        for(int i=0;i<p.size();++i){
            if(w.contains(p[i])){
                ans++;
            }
        }
        return ans;
    }
};