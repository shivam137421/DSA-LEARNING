class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        vector<int>lps(m,0);
        int pre=0;
        int suf=1;
        while(suf<m){
            if(needle[pre]==needle[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                   pre=lps[pre-1];
                }
            }
        }
        int i=0;
        int j=0;
        while(i<n){
            if(haystack[i]==needle[j]){
                i++;
                j++;
            }
            else{
                if(j==0){
                    i++;
                }
                else{
                j=lps[j-1];
                }

            }
            if(j==m){
                return i-j;

            }
        }
        return -1;
        
    }
};