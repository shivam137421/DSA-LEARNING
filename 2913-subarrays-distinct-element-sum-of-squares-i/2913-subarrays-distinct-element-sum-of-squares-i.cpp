class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>mp;
            int unique=0;
            for(int j=i;j<n;j++){
                if(!mp[nums[j]]){
                    mp[nums[j]]++;
                    unique++;
                }
                ans=ans+(pow(unique,2));
            }
        }
        return ans;
        
    }
};