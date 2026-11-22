class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        bool bvisit=false;
        for(int i=0;i<n;i++){
            if(s[i]=='a' && bvisit==true){
                return false;
            }
            else if(s[i]=='b'){
                bvisit=true;

            }
        }
        return true;
        
    }
};