class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> ans;
        int c = 0;
        for(int i=0; c<arr.size();++i){
            if(arr[i] == 0 and c<arr.size()-1){
                ans.push_back(0);
                c += 1 ;
                ans.push_back(0);
                c += 1;
            } else{
                ans.push_back(arr[i]);
                c += 1 ;
            }
        }
        arr = ans ;
    }
};