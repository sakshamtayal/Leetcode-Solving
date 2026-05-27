class Solution {
public:
    bool isThree(int n) {
        int cnt = 2;
        for(int i=2 ;i <= n/2 ;++i){
            if(n%i == 0){
               cnt++ ;
            }
        }
       if(cnt == 3){
        return true;
       }
       return false;
    }
};