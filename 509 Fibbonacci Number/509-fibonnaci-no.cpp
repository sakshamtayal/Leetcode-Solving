class Solution {
public:
    int fib(int n) {
        int fb = 0;
        if(n == 0){
            fb = 0;
        } else if(n == 1){
            fb = 1;
        } else if(n>1){
            fb = fib(n-1) + fib(n-2) ;
        }
        return fb;
    }
};