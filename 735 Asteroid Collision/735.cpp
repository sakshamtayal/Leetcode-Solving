class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> s;
        s.push(a[0]);
        for(int i=1;i<a.size();++i){
            if(s.empty()) {
                s.push(a[i]);
                continue;
            }
            if(s.top() < 0){
                s.push(a[i]);
            } else if(s.top()>0){ 
                if(a[i] > 0){
                    s.push(a[i]); 
                } else{
                   while(!s.empty() && s.top()>0 && s.top() < (-1)*a[i]){
                    s.pop();
                   }
                   if(!s.empty() && s.top()>0){
                    if(s.top() > (-1)*a[i]){
                        a[i] = 0;
                    }
                    if(s.top() == (-1)*a[i]){
                        s.pop();
                        a[i] = 0;
                    }
                   }
                   if(a[i] < 0){
                    s.push(a[i]);
                   }
                }
            }
            if(!s.empty() && s.top() == 0){
                s.pop();
            }
        }
        vector<int> ans;
        while(!s.empty()){
            ans.insert(ans.begin(),s.top());
            s.pop();
        }
        return ans;
    }
};