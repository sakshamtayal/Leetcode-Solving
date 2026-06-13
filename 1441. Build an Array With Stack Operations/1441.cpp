class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        vector<string> ans;
        int k = 1 , i= 0;
        while(k<=n && i<t.size()){
            if(t[i] == k){
                ans.push_back("Push");
                i++;
                k++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
                k++;
            }
        }
        return ans;
    }
};
