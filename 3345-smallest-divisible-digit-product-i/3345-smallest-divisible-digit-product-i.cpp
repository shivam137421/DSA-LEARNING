class Solution {
public:
int digitmul(int num){
    int ans=1;
    while(num){
        int rem=num%10;
        ans=ans*rem;
        num/=10;
    }
    return ans;
}
    int smallestNumber(int n, int t) {
        while(1){
            if(digitmul(n)%t==0){
                return n;
            }
            n++;
        }
        return 0;
        
    }
};