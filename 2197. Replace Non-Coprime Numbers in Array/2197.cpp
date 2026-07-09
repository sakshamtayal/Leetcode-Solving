class Solution {
public:
    long long getGcd(long long a, long long b) {
        while (b > 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> ans;     
        for (int x : nums) {
            ans.push_back(x);
            while (ans.size() > 1) {
                long long last = ans.back();
                long long prev = ans[ans.size() - 2];
                long long g = getGcd(last, prev);              
                if (g > 1) {
                    ans.pop_back();
                    ans.pop_back();            
                    long long lcm = (last * prev) / g;
                    ans.push_back(lcm);
                } else {
                    break; 
                }
            }
        }       
        return ans;
    }
};