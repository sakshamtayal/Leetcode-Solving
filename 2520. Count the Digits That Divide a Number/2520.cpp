class Solution {
public:
    int countDigits(int num) {
       int a = num , b = 0;
       while(a>0){
            if(num % (a%10) == 0){
                b++;
            }
            a /= 10;
       } 
       return b;
    }
};