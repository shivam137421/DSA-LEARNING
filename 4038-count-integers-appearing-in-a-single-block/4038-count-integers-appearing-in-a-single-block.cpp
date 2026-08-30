class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        unordered_map<int,int>first;
        unordered_map<int,int>last;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            if(first[nums[i]]){
                continue;
            }
            else{
                first[nums[i]]=i+1;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(last[nums[i]]){
                continue;
            }
            else{
                last[nums[i]]=i+1;
            }
        }
        int ans=0;

        for(auto it=freq.begin();it!=freq.end();it++){
            if(((last[it->first]-1)-(first[it->first]-1)+1)==freq[it->first]){
                ans++;
            }
        }
        return ans;
        
    }
};