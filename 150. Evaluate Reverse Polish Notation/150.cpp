class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
        for(int i=0;i<t.size();++i){
            if(t[i] == "+"){
                int x = s.top();
                s.pop();
                int y = s.top() + x;
                s.pop();
                s.push(y);
            } else if(t[i] == "*"){
                int x = s.top();
                s.pop();
                int y = s.top()*x;
                s.pop();
                s.push(y);
            } else if(t[i] == "-"){
                int x = s.top();
                s.pop();
                int y = s.top() - x;
                s.pop();
                s.push(y);
            } else if(t[i] == "/"){
                int x = s.top();
                s.pop();
                int y = s.top() / x;
                s.pop();
                s.push(y);
            } else{
                s.push(stoi(t[i]));
            }
        }
        return s.top();
    }
};