class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end()) ;
        int ans = -1;
        for(int i=0; i<arr.size();++i){
            if(i + arr[i] -1  < arr.size()){
                if(arr[i] == arr[i + arr[i] - 1] &&  arr[i] != arr[i + arr[i]]){
                    if(i>0 and arr[i] == arr[i-1]){
                        continue;
                    }
                    ans = arr[i] ;
                }
            }

        }
     
        
        
        return ans;
    }
};