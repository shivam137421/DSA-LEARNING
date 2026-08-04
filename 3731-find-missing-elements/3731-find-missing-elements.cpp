class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>mp(n);
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        for(int i=mini;i<maxi;i++){
            if(mp.find(i)!=mp.end()){
                continue;
            }
            else{
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};