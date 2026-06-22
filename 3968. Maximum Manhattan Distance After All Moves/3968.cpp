class Solution {
public:
    int maxDistance(string m) {
        int u = 0 ,b = 0 , c  = 0;
        for(int i=0;i<m.length();++i){
            if(m[i] == 'U'){
                u++;
            }
            if(m[i] == 'D'){
                u--;
            }
            if(m[i] == 'L'){
                b--;
            }
            if(m[i] == 'R'){
                b++;
            }
            if(m[i] == '_'){
                c++;
            }
        }
        if(u<0){
            u *= -1 ;
        }
        if(b<0){
            b *= -1;
        }
        return (u+b+c);
    }
};