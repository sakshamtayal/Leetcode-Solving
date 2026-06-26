class Solution {
public:
    string simplifyPath(string p) {
        stack<string> s;
        string d = "" , n = "" ;
        for(int i=0;i<p.length();++i){
            if(p[i] == '/'){
                if(d.length()>0){
                    if(d.length()==2){
                        if(!s.empty()){
                            s.pop();
                        }
                    }
                    if(d.length() > 2){
                        s.push(d);
                        d = "";
                    }
                    d = "";
                }
                if(n.length()>0){
                    s.push(n);
                    n = "";
                }
            } else if(p[i] == '.'){
                if(n.length()>0){
                    n += '.';
                    continue;
                }
                d += '.';
            }else {
                if(d.length()>0){
                    n += d;
                    d = "";
                }
                n += p[i];
            }
        }
        if(d.length()>1){
            if(d.length()==2){
                if(!s.empty()){
                    s.pop();
                }
            }
            if(d.length()>2){
                s.push(d);
            }
        }
        if(n.length()>0){
            s.push(n);
        }
        if(s.empty()){
            return "/";
        }
        string ans = "";
        while(!s.empty()){
            ans = "/" + s.top() + ans;
            s.pop();
        }
        return ans;
    }
};