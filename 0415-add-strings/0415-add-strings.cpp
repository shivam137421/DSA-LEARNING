class Solution {
public:
string add(string num1, string num2){
    string ans="";
    int sum=0;
    int carry=0;
    int n1=num1.size()-1;
    int n2=num2.size()-1;
    while(n2>=0){
        sum=(num1[n1]-'0')+(num2[n2]-'0')+carry;
        ans+=((sum%10)+'0');
        carry=sum/10;
        n1--;
        n2--;
    }
    while(n1>=0){
        sum=(num1[n1]-'0')+carry;
        ans+=((sum%10)+'0');
        carry=sum/10;
        n1--;

        
    }
    if(carry){
        ans+=((carry)+'0');
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
    string addStrings(string num1, string num2) {
        int size1=num1.size();
        int size2=num2.size();
        string ans="";
        if(size1>=size2){
           ans= add(num1,num2);
        }
        else{
            ans=add(num2,num1);
        }
        return ans;
        
        
    }
};