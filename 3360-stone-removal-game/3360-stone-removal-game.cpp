class Solution {
public:
    bool canAliceWin(int n) {
        int decrease=10;
        int aliceturn=1;
        while(n>=decrease){
            n=n-decrease;
            decrease--;
            if(aliceturn==1){
                aliceturn=0;
            }
            else{
                aliceturn=1;
            }
        }
        if(decrease==0 || aliceturn==0){
            return true;
        }
        return false;
        
    }
};