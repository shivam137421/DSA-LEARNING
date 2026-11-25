class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
        int mini=nums[i];
        int sub_bitval=nums[i];
            for(int j=i;j<n;j++){
                mini=min(nums[j],mini);
                sub_bitval=nums[j]&sub_bitval;

            if(mini==sub_bitval){
                ans++;
            }
                
            }


        }
        return ans;
        
    }
};