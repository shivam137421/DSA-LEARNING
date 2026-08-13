class Solution {
public:
    string sortSentence(string s) {
        int n=s.size();
        vector<string>arr(10);
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
            if(s[i]-'0'<=9){
                arr[s[i]-'0']=ans;
                ans="";
            }
            else{
                ans+=s[i];
            }
            }

        }
        ans=arr[1];
        for(int i=2;i<=9;i++){
            if(arr[i]!=""){
            ans=ans+" "+arr[i];
            }
        }
        return ans;

    }
};