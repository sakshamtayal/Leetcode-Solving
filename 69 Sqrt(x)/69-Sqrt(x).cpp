class Solution {
public:
    int mySqrt(int x) {

        for(long long int i=0; i <= x-1 ;++i){
            if(x<2){
                return x;
            }
            if(x==2){
                return 1;
            }
            if(i*i == x){
               
                return i;
            }
            if(i*i > x){
                
               return i-1 ;
               
            }
        }
        return 0;
    } 
};