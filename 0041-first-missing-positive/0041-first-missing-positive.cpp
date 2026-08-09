class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(nums[i]>0 && nums[i]<=n){
                mp[nums[i]]=1;
            }
        }
        int ans=1;
        for(int i=1;i<=n;i++){
            if(mp.contains(i)){
                ans++;
            }
            else{
                return ans;
            }
        }
        return n+1;
        
    }
};