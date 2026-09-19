class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        int sol = 0;
        for (auto it : mp) {
            if (it.second.size() >= 3) {
                int flag=1;
                int diff=abs(it.second[0]-it.second[1]);
                for(int i=1;i<it.second.size();i++){
                    if(abs(it.second[i]-it.second[i-1])!=diff){
                        flag=0;
                        break;
                    }

                }
                if(flag==1){
                sol++;
                }
            }
        }
        return sol;
        
        
    }
};