class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        vector<int> ans;
        int k = 0;
        for(int i=0;i<n.size();++i){
            if(n[i] == 0){
                k++;
            }
        }
        if(k>1){
            for(int i=0;i<n.size();++i){
                ans.push_back(0);
            }
        } else if(k == 1){
            for(int i=0;i<n.size();++i){
                if(n[i] == 0){
                    int s = 1;
                    for(int i=0;i<n.size();++i){
                        if(n[i] != 0){
                            s *= n[i];
                        }
                    }
                    ans.push_back(s);
                } else{
                    ans.push_back(0);
                } 
            }
        } else{
            int p = 1;;
            for(int i=0;i<n.size();++i){
                p *= n[i];
            }
            for(int i=0;i<n.size();++i){
                ans.push_back(p/n[i]);
            }
        }
        return ans;
    }
};