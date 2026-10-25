class Solution {
public:
int setbit(int num){
    int ans=0;
    while(num>0){
        if(num%2==1){
            ans++;
        }
        num/=2;
    }
    return ans;
}
    int calculateScore(int a, int b) {
        int s1=setbit(a);
        int s2=setbit(b);
        if(s1>=s2){
            return s1*s2;
        }
        return s2/s1;

        
    }
};