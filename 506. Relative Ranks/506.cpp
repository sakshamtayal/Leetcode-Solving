class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& n) {
        vector<int> s = n;
        sort(s.begin(),s.end());
        vector<string> ans;
        for(int i=0;i<n.size();++i){
            for(int j=0;j<s.size();++j){
                if(s[j] == n[i]){
                    if(s.size()-j == 1){
                        ans.push_back("Gold Medal");
                    }
                    else if(s.size()-j == 2){
                        ans.push_back("Silver Medal");
                    }
                    else if(s.size()-j == 3){
                        ans.push_back("Bronze Medal");
                    } else{
                        ans.push_back(to_string(s.size()-j));
                    }
                }
            }
        }
        return ans;
    }
};