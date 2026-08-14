class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n-1;i++){
            int length=0;
            unordered_map<char,int>mp;
            for(int j=i;j<n;j++){
                if(mp[s[j]]<=1){
                    mp[s[j]]++;
                    length++;
                }
                else{
                    break;
                }
                ans=max(ans,length);

            }
        }
        return ans;
        
    }
};