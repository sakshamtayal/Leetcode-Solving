class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int max = 0;
        for(int i=0;i<s.size();++i){
            int p = 1;
            for(int j =0;j<s[i].length();++j){
                if(s[i][j] == ' '){
                    p++;
                }
            }
            if(p>max){
                max = p;
            }
        }
        return max;
    }
};