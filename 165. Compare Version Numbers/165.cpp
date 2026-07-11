class Solution {
public:
    int compareVersion(string v1, string v2) {
        vector<int> a , b;
        string h = "";
        for(int i=0;i<v1.length();++i){
            if(v1[i] == '.'){
                if(h.length()==0){
                    a.push_back(0);
                    continue;
                }
                a.push_back(stoi(h));
                h = "";
            }else{
            h += v1[i];
            }
        }
        a.push_back(stoi(h));
        h = "";
        for(int i=0;i<v2.length();++i){
            if(v2[i] == '.'){
                if(h.length()==0){
                    b.push_back(0);
                    continue;
                }
                b.push_back(stoi(h));
                h = "";
            }else{
                h += v2[i];
            }
        }
        b.push_back(stoi(h));
        for(int i = b.size()-1;i>=0;--i){
            if(b[i] == 0){
                b.pop_back();
            }else{
                break;
            }
        }
        for(int i = a.size()-1;i>=0;--i){
            if(a[i] == 0){
                a.pop_back();
            }else{
                break;
            }
        }
        for(int i=0;i<min(a.size(),b.size());++i){
            if(a[i] > b[i]){
                return 1;
            }
            if(a[i] < b[i]){
                return -1;
            }
        }
        if(a.size()>b.size()){
            return 1;
        }
        if(b.size()>a.size()){
            return -1;
        }
        return 0;
    }
};