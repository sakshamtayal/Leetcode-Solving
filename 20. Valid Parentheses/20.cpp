class Solution {
public:
    bool isValid(string w) {
        stack<char> s;
        for(int i=0;i<w.length();++i){
            if(s.empty()){
                if(w[i] == ')' || w[i] == '}' || w[i] == ']'){
                    return false;
                }else{
                    s.push(w[i]);
                }
            }else{
                if(w[i] == '{' || w[i] == '[' || w[i] == '('){
                    s.push(w[i]);
                }
                if(w[i] == '}'){
                    if(s.top() == '{'){
                        s.pop();
                    }else{
                        return false;
                    }
                }
                if(w[i] == ']'){
                    if(s.top() == '['){
                        s.pop();
                    }else{
                        return false;
                    }
                }
                if(w[i] == ')'){
                    if(s.top() == '('){
                        s.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        return(s.empty()) ;
    }
};