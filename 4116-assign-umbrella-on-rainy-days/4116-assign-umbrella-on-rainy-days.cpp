class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        vector<string>answer(n,"None");
        int alicecount=0;
        int bobcount=0;
        for(int i=0;i<n-1;i++){
            if(rain[i]==1){
                if(rain[i+1]==1 && alicecount<=bobcount){
                    answer[i]="Alice";
                    alicecount++;
                }
                else{
                    answer[i]="Bob";
                    bobcount++;
                }
            }
        }
        if(rain[n-1]==1){
            answer[n-1]="Bob";
        }
        return answer;
        
    }
};