class Solution {
public:
    int reverse(long long int x) {
       long long int a=0;
        while(x != 0 ){
            a = a*10 + x%10 ;
            x = x / 10 ;
        }
        if(a<=2147483647 and a>=-2147483648) {
        return a;
        } else{
            return a*0 ;
        }
        
        
    }
};