class Solution {
public:
    int wateringPlants(vector<int>& p, int c) {
        int steps = 0 , v = c;
        for(int i=0;i<p.size();++i){
            if(p[i]<=v){
                v -= p[i];
                steps++;
            }else if(p[i]>v){
                steps += 2*(i);
                v = c-p[i];
                steps++;
            }
        }
        return steps;
    }
};