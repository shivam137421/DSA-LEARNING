class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int start=nums[0];
        int i=0;
        while(start!=nums[n-1]){
            if(start==nums[i]){
                start++;
                i++;
            }
            else{
                ans.push_back(start);
                start++;

            }
        }
        return ans;
        
    }
};