class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n-1;i=i+2){
            ans=min(ans,stoi(to_string(nums[i])+to_string(nums[i+1])));
            
        }
        return ans;
        
    }
};