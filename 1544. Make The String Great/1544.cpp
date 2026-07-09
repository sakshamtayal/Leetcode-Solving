class Solution {
public:
    string makeGood(string t) {
        stack<char> s;
        for(int i=0;i<t.length();++i){
           if(!s.empty() && abs(s.top()-t[i]) == 32){
            s.pop();
           }else{
            s.push(t[i]);
           }
        }
        string ans = "";
        while(!s.empty()){
            ans = s.top() + ans;
            s.pop();
        }
        return ans;
    }
};