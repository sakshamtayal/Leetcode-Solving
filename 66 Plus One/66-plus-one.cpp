class Solution {
public:
    vector<int> p(vector<int>& n ,int k){
        if(n[k] < 9){
            n[k] += 1 ;
        } else if(n[k] == 9 ){
            if(k>0){
                n[k] = 0;
                return p(n,k-1);
            } else{
                 vector<int> ans;
            ans.push_back(1);
            ans.push_back(0);
            for(int i=1; i<n.size();++i){
                ans.push_back(n[i]);
            }
            return ans;
            }
        }
        return n;
    }
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        return p(digits,n-1);
    }
};