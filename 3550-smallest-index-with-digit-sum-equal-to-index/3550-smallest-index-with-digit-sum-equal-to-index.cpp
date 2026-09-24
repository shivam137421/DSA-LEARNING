class Solution {
public:
int digitsum(int a){
    int sum=0;
    while(a){
        sum=sum+(a%10);
        a=a/10;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==digitsum(nums[i])){
                return i;
            }
        }
        return -1;
        
    }
};