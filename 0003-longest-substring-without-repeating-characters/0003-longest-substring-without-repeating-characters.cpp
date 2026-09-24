class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int ans=0;
        int size=0;
        int i=0;
        int j=0;
        while(i<n){
            if(mp[s[i]]<1){
                mp[s[i]]++;
                size++;
                i++;
            }
            else{
                mp[s[j]]--;
                size--;
                j++;

            }
            ans=max(ans,size);

        }
        return ans;
        
    }
};