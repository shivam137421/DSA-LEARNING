class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxi1=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi1){
                maxi1=nums[i];
            }
            if(mp[nums[i]]==1){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            }
        }
        if(k==n){
            return maxi1;
        }
        if(k==1){
            return maxi;
        }
        else{
            if(mp[nums[0]]==1 && mp[nums[n-1]]==1){
                return max(nums[0],nums[n-1]);
            }
            else if(mp[nums[0]]==1){
                return nums[0];
            }
            else if(mp[nums[n-1]]==1){
                return nums[n-1];
            }
        }
        return -1;
        
    }
};