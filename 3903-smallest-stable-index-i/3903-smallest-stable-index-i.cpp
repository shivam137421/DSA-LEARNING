class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maximum=nums;
        vector<int>minimum=nums;
        for(int i=1;i<n;i++){
            maximum[i]=max(maximum[i],maximum[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            minimum[i]=min(minimum[i],minimum[i+1]);
        }
        for(int i=0;i<n;i++){
            if(maximum[i]-minimum[i]<=k){
                return i;
            }
        }
        return -1;

        
        
    }
};