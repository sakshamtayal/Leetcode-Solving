class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        int n = a.size();
        vector<int> ps(n), ns(n);

        ps[0] = -1;

        stack<int> s;
        s.push(0);
    //lets find prev smaller 
        for(int i = 1; i<n ; ++i){
            while(!s.empty() and a[i] <= a[s.top()]){
                s.pop();
            }
            if(s.empty()) ps[i] = -1 ;
            else ps[i] = s.top();

            s.push(i);
        }
        //stack khali krdo
        while(!s.empty()){
            s.pop();
        }
        //next smaller
        ns[n-1] = n;
        s.push(n-1);
        for(int i= n-2; i >= 0; --i){
            while(!s.empty() and a[i] <= a[s.top()]){
                s.pop();
            }
            if(s.empty()) ns[i] = n;
            else ns[i] = s.top() ;

            s.push(i);
        }
        int ans = 0;
        for(int i=0; i<n;++i ){
            int width = ns[i] - ps[i] - 1;
            int currentArea = a[i] * width;
            ans = max(ans, currentArea);
        }
        return ans;
    }
};