class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int na=nums[0];
        int nb=nums[1];
        int nc=nums[2];

        int pa=nums[n-1];
        int pb=nums[n-2];
        int pc=nums[n-3];

        int ans1=pa*pb*pc;
        int ans2=na*nb*pa;

        return max(ans1,ans2);
        
        
    }
};