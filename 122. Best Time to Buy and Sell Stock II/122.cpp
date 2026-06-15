class Solution {
public:
    int maxProfit(vector<int>& p) {
        stack<int> s;
        int ans = 0;
        for(int i=0;i<p.size();++i){
            if(s.empty()){
                s.push(p[i]);
                continue;
            }
            if(!s.empty()){
                if(s.top() <= p[i]){
                    ans += p[i] - s.top();
                    s.pop();
                    s.push(p[i]);
                }
                if(s.top()>p[i]){
                    s.pop();
                    s.push(p[i]);
                }
            }
        }
        return ans;
    }
};