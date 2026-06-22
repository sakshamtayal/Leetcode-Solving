class Solution {
public:
    int maxNumberOfBalloons(string s) {
        //balloon a[5] ka hisab b->0 , a->1 , l->2 , o-> 3 , n->4
        vector<int> cn(5,0);
        for(int i=0;i<s.length();++i){
            if(s[i] == 'b'){
                cn[0]++;
            }
            if(s[i] == 'a'){
                cn[1]++;
            }
            if(s[i] == 'l'){
                cn[2]++;
            }
            if(s[i] == 'o'){
                cn[3]++;
            }
            if(s[i] == 'n'){
                cn[4]++;
            }
        }
        cn[2] /= 2;
        cn[3] /=2 ;
        return (*min_element(cn.begin(),cn.end()));
    }
};