class Solution {
public:
    string optimalDivision(vector<int>& n) {
        if(n.size() == 1){
            return to_string(n[0]);
        }
        int k = 0;
        string s = "";
        s += to_string(n[0]);
        for(int i=1;i<n.size();++i){
            if(i == 1 && n.size()>2){
            s += "/(" ;
            k++;
            }else{
                s += "/";
            }
            s += to_string(n[i]);
        }
        if(k>0){
            s += ")";
        }
        return s;
    }
};