class Solution {
public:
    bool isHappy(int n) {
        int a = n , c , b ;
       while(a > 5 ){
        b = a ;
        c = 0 ;
        while(b > 0){
            c += (b%10)*(b%10) ;
            b /= 10;
        }
        if(c == n){
            break ;
        }
        a = c ;


       } 
        bool p;
       if(a == 1){
        p = true ;
       } else{
        p = false;
       }
       return p;
    }
};