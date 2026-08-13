class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int ans=0;
        int odd=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            int freq=it->second;
            if(freq%2!=0){
                odd=1;
            }
            ans=ans+(2*(freq/2));

        }
        if(odd==1){
            return ans+1;
        }
        return ans;
        
    }
};