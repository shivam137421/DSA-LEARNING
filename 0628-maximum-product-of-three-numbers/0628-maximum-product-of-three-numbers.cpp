class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int a=INT_MIN;
        int b=INT_MIN;
        int c=INT_MIN;
        int d=INT_MAX;
        int e=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>=a){
                c=b;
                b=a;
                a=nums[i];
            }
            else if(nums[i]>=b){
                c=b;
                b=nums[i];
            }
            else if(nums[i]>=c){
                c=nums[i];
            }
            if(nums[i]<=e){
                d=e;
                e=nums[i];
            }
            else if(nums[i]<=d){
                d=nums[i];
            }
        }
        return max((a*b*c),(a*d*e));
        
        
    }
};