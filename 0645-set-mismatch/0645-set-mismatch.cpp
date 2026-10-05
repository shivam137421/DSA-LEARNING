class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int missing;
        int repeated;
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1){
                repeated=nums[i];
            }
            mp[nums[i]]++;
            sum+=nums[i];

        }
        missing=(n*(n+1))/2-(sum)+repeated;
        return {repeated,missing};
        
    }
};