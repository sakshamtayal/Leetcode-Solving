class Solution {
public:
    void sortColors(vector<int>& n) {
        vector<int> cn(3,0);
        for(int i=0;i<n.size();++i){
            cn[n[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<cn[0];++i){
            ans.push_back(0);
        }
        for(int i=0;i<cn[1];++i){
            ans.push_back(1);
        }
        for(int i=0;i<cn[2];++i){
            ans.push_back(2);
        }
        n = ans;
    }
};