class Solution {
public:
    int maxProduct(int n) {
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;
        while(n!=0){
            int rem=n%10;
            if(rem>=maxi1 ){
                maxi2=maxi1;
                maxi1=rem;
            }
            else{
                if(rem>maxi2){
                    maxi2=rem;
                }
            }
            n=n/10;
        }
        return maxi1*maxi2;
        
    }
};